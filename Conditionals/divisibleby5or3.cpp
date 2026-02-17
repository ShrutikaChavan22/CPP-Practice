//take positive integer and tell if it is divisible by 5 or 3
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(num%5==0 or num%3==0){
        cout<<num<<" is divisible by 5 or 3";
    }
    else{
        cout<<num<<" is not divisible by 5 or 3"; 
    }
    return 0;
}
