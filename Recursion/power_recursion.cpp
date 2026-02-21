//Make a function which calculates 'a' raise to the power 'b' using recursion
#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter base:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is: "<<pow(a,b);
}