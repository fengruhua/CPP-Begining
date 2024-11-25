#include<iostream>
using namespace std;
#include<string>


class CPU
{
    public:
    virtual void work() = 0;
};
class GPU
{
    public:
    virtual void work() = 0;
};
class WD
{
    public:
    virtual void work() = 0;
};

class Inter_Cpu : public CPU{
    public:
    void work(){
        cout<<"Inter CPU is working"<<endl;
    }
};
class Inter_Gpu : public GPU{
    public:
    void work(){
        cout<<"Inter GPU is working"<<endl;
    }
};
class Inter_WD : public WD{
    public:
    void work(){
        cout<<"Inter WD is working"<<endl;
    }
};

class Computer{
    public:
    CPU* cpu;
    GPU* gpu;
    WD* wd;
    Computer(CPU* cpu,
    GPU* gpu,
    WD* wd):cpu(cpu),gpu(gpu),wd(wd){this->work();}
    ~Computer(){
        if(cpu!=nullptr){delete cpu;cpu = nullptr;}
        if(gpu!=nullptr){delete gpu;gpu = nullptr;}
        if(wd!=nullptr){delete wd;wd = nullptr;}
    }
    void work(){
        cpu->work();
        gpu->work();
        wd->work();
    }
};

int main(){
    Computer* MY = new Computer(new Inter_Cpu,new Inter_Gpu,new Inter_WD);
    delete MY;
    system("pause");
}