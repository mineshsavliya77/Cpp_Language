#include<iostream>
using namespace std;

class largest {
   int x, y;
public:

   void input() {
       cout << "Enter the value of  x:";
       cin >> x;
       cout << "Enter the value of  y:";
       cin >> y;

       cout << endl;
   }

   friend void find(largest a);
};

void find(largest a) {
 cout << "the value of x is :"<<a.x<<endl;
 cout << "the value of y is :"<<a.y<<endl<<endl;

if(a.x > a.y){

   cout<<"the largest value of x:"<<a.x<<endl;
}else{

   cout<<"the largest value of y:"<<a.y<<endl;

}
}

int main() {

   largest a;
   a.input();
   find(a);

   return 0;
}

/*

Answer:


Enter the value of  x:90
Enter the value of  y:89

the value of x is :90
the value of y is :89

the largest value of x:90


*/