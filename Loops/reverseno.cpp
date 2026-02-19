//WAP to print sum of a given number
#include<iostream>
using namespace std;
int main(){
    int no,rev=0,rem;
    cout<<"Enter any number:";
    cin>>no;
    while(no!=0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    cout<<"Reverse number:"<<rev;
    return 0;
}