#include<iostream>
using namespace std;
int printNo(int x,int n){
    if(x>n) return 0;
    cout<<x<<endl;
    printNo(x+1,n);
}
int main(){
    int n;
    cout<<"Enter any no:";
    cin>>n;
    printNo(1,n);
    return 0;
}