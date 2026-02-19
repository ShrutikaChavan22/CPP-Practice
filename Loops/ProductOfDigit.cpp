#include<iostream>
using namespace std;
int main(){
    int num,digit;
    cout<<"Enter any number:";
    cin>>num;
    int product=1;
    while(num!=0){
        digit=num%10;
        product=product*digit;
        num=num/10;
    }
    cout<<"Product of given number:"<<product;
    return 0;
}