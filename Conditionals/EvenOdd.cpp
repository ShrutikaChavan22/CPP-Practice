//take positive integer input and check if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"Enter any number:";
    cin>>no;
    if(no%2==0){
        cout<<no<<" is even";
    }
    if(no%2!=0){
        cout<<no<<" is odd";
    }
    return 0;
}
