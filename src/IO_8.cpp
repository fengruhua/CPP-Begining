#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

class vector_Person
{
private:
    /* data */
public:
    vector_Person(string name, int age);
    vector_Person();
    string m_name;
    int m_int;
};
vector_Person:: vector_Person(string name, int age)
{
    m_name = name;
    m_int = age;
}
vector_Person:: vector_Person()
{
}



void my_print_vector(int val){
    cout<<val<<endl;
}

void test_vector_int(){
    vector<int> v;
    v.push_back(10);
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        /* code */
    }
    for_each(v.begin(),v.end(),my_print_vector)(10);

}

void test_vector_Person(){
    vector<vector_Person> v;
    vector_Person p1("张三",10);
    vector_Person p2("李四",10);
    vector_Person p3("王五",10);
    vector_Person p4("赵六",10);
    vector_Person p5("七七",10);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    for (vector<vector_Person>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout<<i->m_name<<endl;
        cout<<i->m_int<<endl;
    }
    

}

void test_vector_Person_star(){
    vector<vector_Person*> v;
    vector_Person p1("张三",10);
    vector_Person p2("李四",10);
    vector_Person p3("王五",10);
    vector_Person p4("赵六",10);
    vector_Person p5("七七",10);
    vector_Person p6 = vector_Person("八八",20);
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);
    for (vector<vector_Person*>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout<<(*i)->m_name<<endl;
        cout<<(*i)->m_int<<endl;
    }
    

}
int main(){
    test_vector_Person();
    system("pause");
}