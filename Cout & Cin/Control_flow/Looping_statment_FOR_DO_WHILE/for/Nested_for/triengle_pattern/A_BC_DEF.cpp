#include<iostream>
using namespace std;

int main (){
    
    int i,j;
    char a=65;


    for(i=5; i>=1; i--){
        
        for(j=5; j>=i; j--){
            
            cout<<a<<"\t";
            a++;

        }
        cout<<"\n";
    }

} 

/*
A
B       C
D       E       F
G       H       I       J
K       L       M       N       O

*/