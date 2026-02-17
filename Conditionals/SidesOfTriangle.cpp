//take three number input and tell if they can be a side of a triangle
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of triangle:";
    cin>>a>>b>>c;
    if((a+b)>c && (b+c)>a && (a+c)>b){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Invalid Triangle";
    }
   return 0;
}