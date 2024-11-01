#include <iostream>
#include"Calculator.h"

using namespace std;

int main()
{
    int n1;
    cout<<"Enter Your First Number"<<endl;
    cin>>n1;
    int n2;
     cout<<"Enter Your Second Number"<<endl;
     cin>>n2;

   Calculator obj;


   cout<<"The Sum Is : "<<obj.sum(n1,n2)<<endl;
   cout<<"The Sub Is : "<<obj.sub(n1,n2)<<endl;
    cout<<"The Mul Is : "<<obj.mul(n1,n2)<<endl;
     cout<<"The Div Is : "<<obj.div(n1,n2)<<endl;
    return 0;
}
