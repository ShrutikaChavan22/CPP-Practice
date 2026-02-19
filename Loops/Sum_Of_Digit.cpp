//WAP to print sum of a given number
#include<iostream>
using namespace std;
int main(){
    int no,sum=0,digit;
    cout<<"Enter any number:";
    cin>>no;
    while(no!=0){
        digit=no%10;
        sum=sum+digit;
        no=no/10;
    }
    cout<<"Sum of a number:"<<sum;
    return 0;
}