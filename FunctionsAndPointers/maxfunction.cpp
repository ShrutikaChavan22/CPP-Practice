#include<iostream>
using namespace std;
int maxOfTwo(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<maxOfTwo(a,b);
}