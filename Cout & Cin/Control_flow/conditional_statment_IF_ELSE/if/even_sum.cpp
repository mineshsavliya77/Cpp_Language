#include<iostream>
using namespace std;

int main (){
    
    int a,i,sum=0;

   
    cout<<"\nEnter the value :";
    cin >>a;

    for(i=1; i<=a; i++ ){
        if(i%2==0){
        
        cout<<i<<"\n";

        sum+=i;

        }
    }cout<<"\nSum is :"<<sum<<"\n";

} 

/*

Enter the value :20
2
4
6
8
10
12
14
16
18
20

Sum is :110



*/