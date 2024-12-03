#include"WorkerManager.h"

WorkerManager::WorkerManager(){};

WorkerManager::~WorkerManager(){};

void WorkerManager::Show_Menu()
{
    cout<<"-----Menu-----"<<endl;
    cout<<"1、添加职工信息"<<endl;
    cout<<"2、显示职工信息"<<endl;
    cout<<"3、删除职工信息"<<endl;
    cout<<"4、修改职工信息"<<endl;
    cout<<"5、查找职工信息"<<endl;
    cout<<"6、排列职工信息"<<endl;
    cout<<"7、清空职工信息"<<endl;
    cout<<"8、退出职工系统"<<endl;
};

void WorkerManager::Exit_System(){
    cout<<"欢迎下次使用"<<endl;
    delete this;
    system("cls");
    exit(0);
};


Worker::Worker(/* args */)
{
}

Worker::~Worker()
{
}