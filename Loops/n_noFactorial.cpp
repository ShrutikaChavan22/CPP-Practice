//print the factorial of n numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    for(int num=1;num<=n;num++){
        int fact=1;
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        cout<<"factorial of given number"<<num<<":"<<fact<<endl;
    }
    return 0;
}