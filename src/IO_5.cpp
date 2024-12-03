#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void of_stream(){
    ofstream ofs;
    ofs.open("E:\\desk\\VSCode\\CPP-Begining\\text.txt",ios::out | ios::ate);
    ofs<<"hello world"<<endl;
    ofs.close();
}
void if_stream(){
    ifstream ifs;
    ifs.open("E:\\desk\\VSCode\\CPP-Begining\\text.txt",ios::in);
    if (!ifs.is_open())
    {
        cout<<"error"<<endl;
    }
    char buf[1024] = {0};
    while (ifs>>buf)
    {
        cout<<buf<<endl;
    }
    string buffer;
    while (getline(ifs,buffer))
    {
        cout<<buffer<<endl;
    }
    ifs.close(); 
    
}
int main(){
    if_stream();
    system("pause");
}
