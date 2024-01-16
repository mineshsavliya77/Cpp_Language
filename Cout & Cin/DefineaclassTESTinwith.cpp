/* Define a class TEST in C++ with following description: */

#include<iostream>
using namespace  std;

class Test
{
private:

    int TestCode,CenterReqd,NoCandidate;
    char Description[100];

    int CALCNTR(){

        return (NoCandidate/100+1);

    }

    public:
    
    void SCHEDULE(){ 

        cout << "Enter the TestCode : "<<endl;
        cin >> TestCode;

        cout << "Enter the Description : "<<endl;
        cin.get();
        cin.getline(Description,100);


        cout << "Enter the No Candidate : "<<endl;
        cin >> NoCandidate;

        cout << "Enter the CenterReqd : "<<endl;
        cin >> CenterReqd;

    }

    void DISPTEST(){
   
    cout << "Enter the TestCode : " << TestCode <<endl;
    cout << "Enter the Description : "<< Description <<endl;
    cout << "Enter the NoCandidate : " << NoCandidate <<endl;
    cout << "Enter the CenterReqd : " << CenterReqd <<endl;
    cout << "Enter the CALCNTR : " << CALCNTR() <<endl;

}

};

int main(){
    Test t;
    cout <<endl;
    t.SCHEDULE();
    t.DISPTEST();
}


/*

Enter the TestCode : 
55
Enter the Description : 
34
Enter the No Candidate : 
12
Enter the CenterReqd : 
78

Ans :

Enter the TestCode : 55
Enter the Description : 34
Enter the NoCandidate : 12
Enter the CenterReqd : 78
Enter the CALCNTR : 1

*/