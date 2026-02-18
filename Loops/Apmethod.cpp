//Display this AP=1,3,5,7,9.. upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int a=4;
    for(int i=1;i<=2*n+1;i+=3){
        cout<<a<<" ";
        a=a+3;
    }
    return 0;
}