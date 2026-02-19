//Write a program to count digits of a given number
#include<iostream>
using namespace std;
int main(){
    int count=0;
    int no;
    cout<<"Enter any number:";
    cin>>no;
    while(no!=0){
        no=no/10;
        count++;
    }
    cout<<"Count of a number:"<<count;
    return 0;
}