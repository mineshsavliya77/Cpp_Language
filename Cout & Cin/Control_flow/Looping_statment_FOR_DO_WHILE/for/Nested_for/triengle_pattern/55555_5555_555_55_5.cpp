#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=5;


    for(i=1; i<=5; i++){
        
        for(j=5; j>=i; j--){
            
            cout<<a<<"\t";

        }
        cout<<"\n";
    }

} 

/*

5       5       5       5       5
5       5       5       5
5       5       5
5       5
5

*/