//take positive integer and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(num>99 && num<1000){
        cout<<num<<" is three digit number";
    }
    else{
        cout<<num<<" is not three digit number"; 
    }
    return 0;
}
