#include<iostream>
using namespace std;


template<typename T,typename F>
void swap_template(T &a,T &b,F &c)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    char a = '10';
    char b = '20';
    int c = 20;
    swap_template(a,b,c);
    cout<<a<<" "<<b<<endl;
    system("pause");
}
