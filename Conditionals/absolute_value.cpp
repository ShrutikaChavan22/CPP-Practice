//take positive integer input and print absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(num>=0){
        cout<<num;
    }
    else{
        cout<<-num;
    }
    return 0;
}