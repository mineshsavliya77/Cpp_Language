#include<iostream>
using namespace std;

int main(){

int i=1,n;

cout << "enter the value of n :";
cin  >> n;

    do{
        cout << i <<"\n";
        i++;
    }
    while(i<=n);

    return 0;
}