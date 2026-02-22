//power function logarithmic
#include<iostream>
using namespace std;
int powlog(int a,int b){
    if(b==1) return a;
    int x=powlog(a,b/2);
    if(b%2==0){
      return x*x;
    }
    else{
        return x*x*a;
    }
}
int main(){
    int a,b;
    cout<<"Enter base:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is: "<<powlog(a,b);
}