#include<iostream>
using namespace std;

int main (){
    
    int i,j;
    char a=65,b=97;


    for(i=5; i>=1; i--){
        
        for(j=5; j>=i; j--){

            if(j%2==0){
            cout<<a<<"\t";
            }else{
            cout<<b<<"\t";
            }
            a++;
            b++;

        }
        cout<<"\n";
    }

} 

/*
a
b       C
d       E       f
g       H       i       J
k       L       m       N       o

*/