#include<iostream>
using namespace  std;


class Test
{
    
private:

int admno;
char sname;
float eng,math,sci;
float totel;

   
public:
    
  void takedata(){
    cout << "enter the admno" <<endl;
    cin >> admno;

    cout << "enter the sname" <<endl;
    cin >> sname;

    cout << "enter the eng" <<endl;
    cin >> eng;

    cout << "enter the math" <<endl;
    cin >> math;

    cout << "enter the sci" <<endl;
    cin >> sci;

    totel = eng = math = sci ;
  }
};



int main(){
   
    
}
