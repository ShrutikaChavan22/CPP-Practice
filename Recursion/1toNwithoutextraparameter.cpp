#include<iostream>
using namespace std;
int printNo(int n){
    if(n==0) return 0;
    printNo(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter any no:";
    cin>>n;
    printNo(n);
    return 0;
}