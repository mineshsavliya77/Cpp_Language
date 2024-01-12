// class and object => access specifire => public,private,protected

#include<iostream>
using namespace  std;


class Test
{
 //by defualt private
private:

    int a=505; // member data / properties

public:
    
    void hello(){ // member function / method
        cout << "Hello Wolrd"<<endl;
        cout << "Value is a : "<<a<<endl;
    }
};



int main(){
    Test t; // t object
    // t.a=101
    t.hello();
}


/*
  int, float, char
  array, struct, class

  class have a state and behaviour
*/