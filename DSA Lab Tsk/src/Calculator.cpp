#include "Calculator.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{

}

Calculator::~Calculator()
{

}
int Calculator::sum(int a, int b){
return a+b;
}
int Calculator::sub(int a, int b){
return a-b;
}
int Calculator::mul(int a, int b){
return a*b;
}
int Calculator::div(int a, int b){
    if(b!=0){
return a/b;
    }
    else{
        cout<<"Error"<<endl;
       return ;
    }

}
