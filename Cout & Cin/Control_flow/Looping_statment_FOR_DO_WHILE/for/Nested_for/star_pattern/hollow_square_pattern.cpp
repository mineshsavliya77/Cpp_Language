#include<iostream>
using namespace std;

int main (){
    
    int i,j,n,k;

     cout<<"\nEnter the value :";
     cin >>n;

        for(i=1; i<=n; i++){
        
        for(j=1; j<=n; j++){

            if(i==1 || i==n || j==1 || j==n ){    
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

} 

/*

Enter the value :10

* * * * * * * * * *
*                 *
*                 *
*                 * 
*                 * 
*                 * 
*                 *
*                 *
*                 *
* * * * * * * * * * 

*/