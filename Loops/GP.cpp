//Display this GP=1,2,4,8,16.. upto 'n' terms.GP(Geometric Progression)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int a=1;
    for(int i=1;i<=2*n+1;i+=3){
        cout<<a<<" ";
        a=a*2;
    }
    return 0;
}