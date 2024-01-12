#include<iostream>
using namespace  std;


class student
{
private:

    int admno;
    char sname[20];
    float eng, math, science;
    float total;


    float ctotal(){

        total = eng + math + science;
        return total;

    }

public:
    
    void Takedata(){ 
        cout << "Enter the admission number : "<<endl;
        cin >> admno;

        cout << "Enter the student name : "<<endl;
        cin.get();
        cin.getline(sname,20);

        cout << "Enter the marks of eng : "<<endl;
        cin >> eng;

        cout << "Enter the marks of math : "<<endl;
        cin >> math;

        cout << "Enter the marks of science : "<<endl;
        cin >> science;

        total = ctotal();

    }

    void Showdata(){
   
    cout << "Enter the admission number : " << admno <<endl;
    cout << "Enter the student name : "<< sname <<endl;
    cout << "Enter the marks of eng : " << eng <<endl;
    cout << "Enter the marks of math : " << math <<endl;
    cout << "Enter the marks of science : " << science <<endl;
    cout << "Enter the total : " << total <<endl;

}

};





int main(){
    student t;

    t.Takedata();
    cout <<endl;
    t.Showdata();
}
