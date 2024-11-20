#include<iostream>
using namespace std;

struct Person
{
    int num1;
    int num2;
    int sum;
};

void add(Person * q){
    q->num1 = 1;
    q->num2 = 2;
    q->sum = q->num1 + q->num2;
    Person* p = new Person;
    p->num1 = 2;
    p->num2 = 5;
    p->sum = 7;
    q = p;
}

int main(){
    // 动态分配内存给 person
    Person* person = nullptr;  // 使用 new 创建 Person 对象
    cout<<(person == nullptr)<<endl;
    // person->sum = 4;
    // // 调用 add 函数
    // add(person);

    // // 输出 sum 的值
    // cout << person->sum << endl;

    system("pause");
    // 释放分配的内存
    delete person;  // 释放动态分配的内存

    return 0;
}
