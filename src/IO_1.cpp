#include "Person.h"

void show() {
    cout << "--- Menu ---" << endl;
    cout << "1. 查看所有的老师学生信息" << endl;
    cout << "2. 添加学生" << endl;
    cout << "3. 添加老师" << endl;
    cout << "4. 删除人" << endl;
    cout << "5. 查找人" << endl;
    cout << "0. 退出" << endl;
    cout << "选择: ";
}

int main() {
    system("chcp 65001");
    system("cls");

    int num;
    teacher* teacher_head = nullptr;
    
    while (true) {
        show();
        cin >> num;
        system("cls");
        switch (num) {
            case 1:
                show_Person(teacher_head);
                break;
            case 2:
                add_student(teacher_head);
                break;
            case 3:
                add_teacher(teacher_head);
                break;
            case 4: {
                string person_type, name;
                cout << "请输入删除的类型（teacher/student）: ";
                cin >> person_type;
                cout << "请输入要删除的名字: ";
                cin >> name;

                if (person_type == "teacher") {
                    delete_teacher(teacher_head, name);
                } else if (person_type == "student") {
                    string teacher_name;
                    cout << "请输入学生所在的老师姓名: ";
                    cin >> teacher_name;
                    delete_student(teacher_head, teacher_name, name);
                } else {
                    cout << "无效类型" << endl;
                }
                break;
            }
            case 5:
                find_person(teacher_head);
                break;
            case 0:
                cout << "退出系统..." << endl;
                return 0;
            default:
                cout << "无效选择，请重新选择。" << endl;
        }
    }
}
