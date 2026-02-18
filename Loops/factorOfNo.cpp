//write a program to find the highest factor of a number 'n' (other than n itself)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int f=1;//for store highest factor
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
          f=i;
          break;
        }
    }
    cout<<f;
    return 0;
}