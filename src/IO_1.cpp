#include"Person.h"
void show(){
    cout << "--- Menu ---" << endl;
    cout << "1. 查看所有的老师学生信息" << endl;
    cout << "2. Add a student" << endl;
    cout << "3. Add a teacher" << endl;
    cout << "4. Delete a teacher/student" << endl;
    cout << "5. Find a teacher/student" << endl;
    cout << "0. Exit" << endl;
    cout << "Choose an option: "<<endl; 
}
int main(){
    system("chcp 65001");
    system("cls");
    int num;
    teacher* teacher_head = nullptr ;
    while (true)
    {
        show();
        cin>>num;
        system("cls");
        switch (num)
        {
        case 1:
            show_Person(teacher_head);
            break;
        case 2:
            add_student(teacher_head);  
            break;
        case 3:
            add_teacher(teacher_head);  
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;    
        default:
            system("pause");
            return 0;
        }
    }
}