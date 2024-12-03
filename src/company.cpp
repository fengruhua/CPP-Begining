#include"WorkerManager.h"

int main(){
    system("chcp 65001");
    system("cls");
    WorkerManager WM;
    int choice = 0;
    while (true)
    {
        WM.Show_Menu();
        cout<<"请输入您的选择"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 8:
            WM.Exit_System();
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
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
            break;
        }
    }
    
    system("pause");
}