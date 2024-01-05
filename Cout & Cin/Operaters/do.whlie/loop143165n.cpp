#include<iostream>
using namespace std;

int main(){

int i=1,n;

cout << "enter the value of n :";
cin >> n;

    do{
        if(i%2==0){
            count <<i*i;
        }
        else{
            count << i;
        }
        i++;
    }
    while(i<=n);

    return 0;
}   