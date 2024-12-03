#pragma once
#include<iostream>
#include<string>
using namespace std;
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


