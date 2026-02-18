//write a program to create a calculator that perfoem basic arithmetic operation (add,sub,mul,div) using switch
//the calculator should input two numbers and operator from user
#include<iostream>
using namespace std;
int main(){
   int n1,n2;
   char op;
   cout<<"Enter two numbers:";
   cin>>n1>>n2;
   cout<<"Enter operator that you want to perform:";
   cin>>op;
   switch(op){
     case '+':cout<<"Addition:"<<n1+n2;
            break;
     case '-':cout<<"Substraction:"<<n1-n2;
            break;
     case '*':cout<<"Multiplication:"<<n1*n2;
            break;
     case '/':cout<<"Division:"<<n1/n2;
            break;
     default:cout<<"Invalid input";
   }
   return 0;
}