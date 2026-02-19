//WAP to print factorial of a given number
#include<iostream>
using namespace std;
int main(){
    int no,fact=1;
    cout<<"Enter any number:";
    cin>>no;
    for(int i=1;i<=no;i++){
        fact=fact*i;
    }
    cout<<"factorial of given number:"<<fact;
    return 0;
}