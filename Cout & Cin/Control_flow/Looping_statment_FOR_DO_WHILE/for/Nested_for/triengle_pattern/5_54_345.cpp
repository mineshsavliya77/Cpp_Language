#include<iostream>
using namespace std;

int main (){
    
    int i,j,a=5;


    for(i=5; i>=1; i--){
        
        for(j=5; j>=i; j--){
            
            cout<<j<<"\t";

        }
        cout<<"\n";
    }

} 

/*

5
4       4
3       3       3
2       2       2       2
1       1       1       1       1
*/