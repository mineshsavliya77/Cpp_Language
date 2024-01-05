#include<iostream>
using namespace std;

int main(){

int i=1,n,b=1;

cout << "enter the value of n :";
cin >> n;

do{
    b*=2;
    cout << " " <<b;
    i++;
}
while(i<=n);

    return 0;
}
