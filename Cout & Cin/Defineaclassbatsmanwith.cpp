#include<iostream>
using namespace  std;


class Test
{
private:

    int admno;
    char sname[20];
    float eng, math, science;
    float total;
    float ctotal();

public:
    
    float Takedata(){ 
        cout << "Enter the admno"<<endl;
        cin >> admno;

        cout << "Enter the sname"<<endl;
        cin >> sname[20];

        cout << "Enter the marks of eng"<<endl;
        cin >> eng;

        cout << "Enter the marks of math"<<endl;
        cin >> math;

        cout << "Enter the marks of science"<<endl;
        cin >> science;

        total = (eng + math + science)*100;
        

    }
};


void Showdata(){
   
}


int main(){
    Test t; 
    t.Takedata();
}
