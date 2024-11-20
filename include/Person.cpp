#include "Person.h"

// 显示所有老师和学生信息
void show_Person(teacher* head) {
    teacher* temp = head;
    student* temp_s;
    if (head == nullptr) {
        cout << "暂无任何老师信息" << endl;
        return;
    }
    while (temp != nullptr) {
        show_teacher(temp);
        temp_s = temp->head;
        if (temp_s == nullptr) {
            cout << "暂无任何学生信息" << endl;
        } else {
            while (temp_s != nullptr) {
                show_student(temp_s);
                temp_s = temp_s->next;
            }
        }
        temp = temp->next;
    }
}

// 查找学生
student* find_student(teacher* find, string name) {
    student* p = find->head;
    while (p != nullptr) {
        if (p->name == name) {
            return p;
        }
        p = p->next;
    }
    return nullptr;
}

// 查找老师
teacher* find_teacher(teacher* head, string name) {
    teacher* p = head;
    while (p != nullptr) {
        if (p->name == name) {
            return p;
        }
        p = p->next;
    }
    return nullptr;
}

// 添加学生
void add_student(teacher* head) {
    string teacher_name, student_name, age_str;
    teacher* teacher_ptr;
    student* last_student = nullptr;
    student* new_student = nullptr;
    while (true) {
        cout << "请输入要添加学生的老师.要退出请输入“end”" << endl;
        cin >> teacher_name;
        if (teacher_name == "end") break;
        
        teacher_ptr = find_teacher(head, teacher_name);
        if (teacher_ptr == nullptr) {
            cout << "没有找到该老师。" << endl;
            continue;
        }

        while (true) {
            new_student = new student;
            cout << "请输入学生姓名: ";
            cin >> new_student->name;
            cout << "请输入学生年龄: ";
            cin >> new_student->age;
            
            if (teacher_ptr->head == nullptr) {
                teacher_ptr->head = new_student;
            } else {
                last_student->next = new_student;
                new_student->last = last_student;
            }

            last_student = new_student;
            cout << "是否继续添加学生 YES/NO?" << endl;
            string choice;
            cin >> choice;
            if (choice == "NO") break;
        }
    }
    cout << "感谢您的使用" << endl;
}

// 添加老师
void add_teacher(teacher*& head) {
    teacher* new_teacher = new teacher();
    cout << "请输入老师姓名: ";
    cin >> new_teacher->name;
    cout << "请输入老师年龄: ";
    cin >> new_teacher->age;

    if (head == nullptr) {
        head = new_teacher;
    } else {
        teacher* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_teacher;
        new_teacher->last = temp;
    }
    cout << "老师添加成功" << endl;
}

// 查找指定名字的老师或学生
void find_person(teacher* head) {
    string name;
    cout << "请输入要查找的人（老师或学生）: ";
    cin >> name;

    teacher* teacher_ptr = find_teacher(head, name);
    if (teacher_ptr != nullptr) {
        cout << "找到老师: " << teacher_ptr->name << endl;
        return;
    }

    teacher_ptr = head;
    bool found = false;
    while (teacher_ptr != nullptr) {
        student* student_ptr = teacher_ptr->head;
        while (student_ptr != nullptr) {
            if (student_ptr->name == name) {
                if (!found) {
                    cout << "找到以下学生：" << endl;
                    found = true;
                }
                cout << "学生姓名: " << student_ptr->name << ", 年龄: " << student_ptr->age
                     << "，所在老师: " << teacher_ptr->name << endl;
            }
            student_ptr = student_ptr->next;
        }
        teacher_ptr = teacher_ptr->next;
    }

    if (!found) {
        cout << "没有找到该人。" << endl;
    }
}

// 显示老师信息
void show_teacher(teacher* head) {
    cout << "老师姓名: " << head->name << endl;
    cout << "年龄: " << head->age << endl;
}

// 显示学生信息
void show_student(student* head) {
    cout << "学生姓名: " << head->name << endl;
    cout << "年龄: " << head->age << endl;
}

// 删除老师
void delete_teacher(teacher*& head, string name) {
    teacher* temp = head;
    while (temp != nullptr) {
        if (temp->name == name) {
            if (temp->last != nullptr) {
                temp->last->next = temp->next;
            } else {
                head = temp->next;  // 如果是头节点
            }
            if (temp->next != nullptr) {
                temp->next->last = temp->last;
            }
            delete temp;
            cout << "老师 " << name << " 已被删除" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "未找到该老师" << endl;
}

// 删除学生
void delete_student(teacher* head, string teacher_name, string student_name) {
    teacher* teacher_ptr = find_teacher(head, teacher_name);
    if (teacher_ptr == nullptr) {
        cout << "未找到该老师" << endl;
        return;
    }
    
    student* student_ptr = teacher_ptr->head;
    while (student_ptr != nullptr) {
        if (student_ptr->name == student_name) {
            if (student_ptr->last != nullptr) {
                student_ptr->last->next = student_ptr->next;
            } else {
                teacher_ptr->head = student_ptr->next;  // 如果是头节点
            }
            if (student_ptr->next != nullptr) {
                student_ptr->next->last = student_ptr->last;
            }
            delete student_ptr;
            cout << "学生 " << student_name << " 已被删除" << endl;
            return;
        }
        student_ptr = student_ptr->next;
    }
    cout << "未找到该学生" << endl;
}
