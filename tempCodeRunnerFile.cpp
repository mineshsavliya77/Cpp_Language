#include<iostream>
using namespace std;

int main (){

    int i,k,n,j;

    //cout<<"Enter the rows your pattern: ";
    //cin >>n;

    n=5;
    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

            cout<<" ";
        }
        for(k=n; k>=i; k--){
            cout<<"* ";
        }
        cout<<"\n";
    }


    for(i=1; i<=n; i++){

        for(j=1; j<=i; j++){

            cout<<" ";
        }
        for(k=n; k>=i; k--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}