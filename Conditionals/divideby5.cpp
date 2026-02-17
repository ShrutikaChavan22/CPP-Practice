//take positive integer input and check if it is divide by 5 or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(num%5==0){
        cout<<num<<" is a divide by 5";
    }
    else{
        cout<<num<<" is a not divide by 5";
    }
    return 0;
}