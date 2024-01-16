#include<iostream>
using namespace  std;

  class student
 {
    private:

    int bcode;
    char bname[10]; 
    float innings, notout, runs; 
    float batavg; 


    float calcavg(){ 

        batavg = innings + notout + runs; 
        return batavg; 

    } 

    public: 
    
    void readdata(){ 
        cout << "Enter the bcode : "<<endl;
        cin >> bcode;

        cout << "Enter the bname : "<<endl;
        cin.get();  // --> sting spece print
        cin.getline(bname,10);

        cout << "Enter the marks of innings : " <<endl;
        cin >> innings;

        cout << "Enter the marks of notout : " <<endl;
        cin >> notout;

        cout << "Enter the marks of runs : " <<endl;
        cin >> runs;

        batavg = calcavg();

    }

    void displaydata(){
   
    cout << "Enter the bcode : " << bcode <<endl;
    cout << "Enter the bname : "<< bname <<endl;
    cout << "Enter the marks of innings : " << innings <<endl;
    cout << "Enter the marks of notout : " << notout <<endl;
    cout << "Enter the marks of runs : " << runs <<endl;
    cout << "Enter the batavg : " << batavg <<endl;

    }

   };

    int main(){
    student t;

    t.readdata();
    cout <<endl;
    t.displaydata();
    
}