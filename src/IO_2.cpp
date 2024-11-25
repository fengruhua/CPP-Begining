#include<iostream>
using namespace std;

class Dad{
    public:
    int m_a = 10;
    int m_d = 50;
    private:
    int m_b = 20;
    protected:
    int m_c = 30;
};

class son:public Dad{
public:
    int m_a = 30;
   void func(){
    Dad::m_a = 20;
   }
};
int main(){
    son s1;
    cout<<s1.Dad::m_a<<endl;
    system("pause");
}