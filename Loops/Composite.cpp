//write a program to check the no is composite or not
#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter value of n:";
    cin>>n;
    int f=1;//for store highest factor
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
          cout<<"Composite";
          break;
        }
    }
    return 0;
}