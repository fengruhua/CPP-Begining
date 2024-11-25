#include<iostream>
using namespace std;

class Dad{
    public:
    virtual void func() = 0;
};

class son:public Dad{
public:
    int m_a = 30;
   void func(){
    cout<<"1"<<endl;
   }
};
int main(){
    Dad * s1 = new son;
    s1->func();
    delete s1;
    system("pause");
}