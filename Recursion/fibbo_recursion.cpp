//Make a function which calculates nth fibonancci number using recursion
#include<iostream>
using namespace std;
int fibbo(int n){
    if(n==1 || n==2) return 1;
    return fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n;
    cout<<"Enter any no:";
    cin>>n;
    cout<<fibbo(n);
}