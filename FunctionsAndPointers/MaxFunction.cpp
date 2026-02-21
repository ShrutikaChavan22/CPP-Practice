#include<iostream>
using namespace std;
int MaxToNo(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<MaxToNo(a,b);
    return 0;
}