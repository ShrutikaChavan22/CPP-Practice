//take positive integer input and check if it is positive or negative
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(num>0){
        cout<<num<<" is a positive";
    }
    else{
        cout<<num<<" is a negative";
    }
    return 0;
}