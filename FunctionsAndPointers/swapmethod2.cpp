#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Before swapping value of a and b"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping value of a and b"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}