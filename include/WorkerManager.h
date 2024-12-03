#pragma once
#include<iostream>
#include<string>
using namespace std;

class WorkerManager
{
private:
    /* data */
public:
    WorkerManager();
    ~WorkerManager();
    void Show_Menu();
    void Exit_System();
};

class Worker
{
private:
    /* data */
public:
    Worker(/* args */);
    ~Worker();
    virtual void Show_Info() = 0;
    virtual string Get_DeptName() = 0;
    
};


