#include<iostream>
using namespace std;
class bose{
    protected:
    int a;
    public:
    void hello()
    {
        cout<<"hello"<<endl;
    }
};
class derived : public bose
{
    public:
    
    void world()
    {
        hello();
        a=101;
        cout<<"world"<<a<<endl;
    }
};

int main()
{
    derived d;
    d.hello();
    d.world();
    return 0;
}


