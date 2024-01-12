#include<iostream>
using namespace  std;

  class student
 {
    private:

    int admno;
    char sname[10]; // --> length
    float eng, math, sci;
    float total;


    float ctotal(){

        total = eng + math + sci;
        return total;

    }

    public:
    
    void Takedata(){ 
        cout << "Enter the admno : "<<endl;
        cin >> admno;

        cout << "Enter the sname : "<<endl;
        cin.get();  // --> sting spece print
        cin.getline(sname,10);

        cout << "Enter the marks of eng : "<<endl;
        cin >> eng;

        cout << "Enter the marks of math : "<<endl;
        cin >> math;

        cout << "Enter the marks of sci : "<<endl;
        cin >> sci;

        total = ctotal();

    }

    void Showdata(){
   
    cout << "Enter the admno : " << admno <<endl;
    cout << "Enter the sname : "<< sname <<endl;
    cout << "Enter the marks of eng : " << eng <<endl;
    cout << "Enter the marks of math : " << math <<endl;
    cout << "Enter the marks of sci : " << sci <<endl;
    cout << "Enter the total : " << total <<endl;

    }

   };


int main(){
    student t;

    t.Takedata();
    cout <<endl;
    t.Showdata();
}



/*

Enter the admno : 
55
Enter the sname : 
minesh
Enter the marks of eng : 
55
Enter the marks of math : 
19
Enter the marks of sci : 
91

Ans : 

Enter the admno : 55
Enter the sname : minesh
Enter the marks of eng : 55
Enter the marks of math : 19
Enter the marks of sci : 91
Enter the total : 165


*/