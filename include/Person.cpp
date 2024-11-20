#include"Person.h"
void show_Person(teacher* head){
    if (head == nullptr)
    {
        cout<<"暂无任何信息"<<endl;
    }
    else
    {
        teacher* t_temp = head;
        student* s_temp;
        while (t_temp)
        {
            cout<<"老师是："<<t_temp->name<<endl;
            cout<<"年龄为："<<t_temp->age<<endl;
            s_temp = t_temp->head;
            while (s_temp)
            {
                cout<<"学生是："<<s_temp->name<<endl;
                cout<<"年龄是："<<s_temp->age<<endl;
                s_temp = s_temp->next;
            }
            t_temp = t_temp->next;
        }
        
    }
    
    
}
student* find_student(teacher* find, string name){
    student* p = find->head;
    student* find_s = p;
    while (p != nullptr)
    {
        if (p->name == name)
        {
            find_s = p;
            return find_s;
        }
        p = p->next;
    }
    cout<<"暂无这位学生"<<endl;
    return nullptr;
    
}
teacher* find_teacher(teacher* head, string name){
    teacher* p = head;
    teacher* find = p;
    while (p != nullptr)
    {
        if (p->name == name)
        {
            find = p;
            return find;
        }
        p = p->next;
    }
    cout<<"暂无这位老师"<<endl;
    return nullptr;
}
void add_student(teacher* head){
    string name;
    string num;
    teacher* find = nullptr;
    student* find_s = nullptr;
    student* new_student = nullptr;
    while (true)
    {
        cout<<"请输入要添加学生的老师.要退出请输入“end”"<<endl;
        cin>> name;
        if (name == "end")break;
        teacher* find = find_teacher(head, name);
        if (find == nullptr)continue;
        find_s = find->head;
        while (find_s && find_s->next != nullptr) {
            find_s = find_s->next;  // 遍历到链表末尾
        }
        while (true)
        {
            new_student = new student;  // 每次输入新学生时创建一个新的学生对象
            cout<<"请输入学生姓名"<<endl;
            cin>>new_student->name;
            cout<<"请输入学生年龄"<<endl;
            cin>>new_student->age;
            if (find_s == nullptr)
            {
                find->head = new_student;
            }
            else{
                find_s->next = new_student;
                new_student->last = find_s;
            }
            find_s = new_student;
            cout<<"是否继续添加学生 YES/NO ?"<<endl;
            cin>>num;
            if (num == "NO")break;
        }

    }
    cout<<"感谢您的使用"<<endl;

}

void add_teacher(teacher*& head){
    teacher* p = new teacher();
    cout<<"老师的姓名"<<endl;
    cin>>p->name;
    cout<<"老师的年龄"<<endl;
    cin>>p->age;
    teacher* q = head;
    show_Person(head);
    if (q == nullptr)
    {
        head = p;
    }
    else
    {
        while (q->next!=nullptr)
        {
            q = q->next;
        }
        q->next = p;
        p->last = q;
    }
    cout<<"添加成功"<<endl;
}

