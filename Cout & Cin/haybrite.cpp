#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    void setA()
    {
        cout << "enter A :";
        cin >> a;
    }
};

class abc : public base
{
protected:
    int b;

public:
    void setB()
    {
        cout << "enter B :";
        cin >> b;
    }
    void add()
    {
        cout << "addition of a and bis : " << a + b << endl;
        cout << endl;
    }
};
class derived : public base
{
public:
    void world()
    {
        setA();
        cout << "world : " << a << endl;
    }
};
int main()
{
    abc a;
    a.setA();
    a.setB();
    a.add();
    derived d;
    d.world();
}

/*
enter A :10
enter B :20
addition of a and bis : 30
*/