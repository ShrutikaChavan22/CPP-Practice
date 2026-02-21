#include<iostream>
using namespace std;
int sum(int n,int s){
    if(n==0){
        cout<<s<<endl;
        return 0;
    }
    sum(n-1,s+n);
}
int main(){
    int n;
    cout<<"Enter any no:";
    cin>>n;
    sum(n,0);
}