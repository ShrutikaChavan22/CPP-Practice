//take three positive integer input and print greatest of them by using nested if
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Enter third number:";
    cin>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<num1<<" is greater";
        }
        else{
            cout<<num3<<" is greater";
        }
    }
    else {
        if(num2>num3){
            cout<<num2<<" is greater";
        }
        else{
            cout<<num3<<" is greater";
        }
      }
    return 0;
}
