#include<iostream>
using namespace std;

int main(){

int limit,count=1;

cout << "enter the limit :";
cin >> limit;

    do{
        cout << (count*count);
        count++;
    }

    while(count<=limit);

    return 0;
}   