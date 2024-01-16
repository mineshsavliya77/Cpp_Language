#include<iostream>
using namespace std;

class Test
{
private: // class of student
    int Flightnumber;
    char Destination[200];
    float distance, fuel;

    int CALFUEL()
    { 
        if(distance<=1000)
        {
            fuel=500;
        }else if(distance>1000 && distance<=2000)
        {
            fuel = 1100;
        }
        else
        { 
            fuel = 2200;
        }

            return (fuel);
    }

public:

    void FEEDINFO()
    
    {
        cout << "Enter Flight number  :"; 
        cin >> Flightnumber;
        
        cout << "Enter your destination  :";
        cin.get();
        cin.getline(Destination,200);
         
        cout << "Enter the  Distance :" ; 
        cin >> distance;

        
        
        CALFUEL();
     
    }
    
    
    void SHOWINFO()
    {
        
         cout << "\nEnter Flight number    :" <<Flightnumber ;
         cout << "\nEnter your distance   :" <<Destination;
         cout << "\nEnter the fuel :" << fuel;
       
         
        
    }
};



int main (){
    
    Test a;
    a.FEEDINFO();
    cout <<endl;
    a.SHOWINFO();
}