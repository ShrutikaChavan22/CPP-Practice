//write a program to check the no is prime or not
#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter value of n:";
    cin>>n;
    bool flag=true;
    int f=1;//for store highest factor
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
          flag=false;
          break;
        }
    }
    if(flag==true)
      cout<<"number is prime";
    else
      cout<<"number is composite";

    return 0;
}