#include<iostream>
using namespace std;
int printNo(int n){
    if(n==0) return 0;
    cout<<n<<endl;
    printNo(n-1);
}
int main(){
    int n;
    cout<<"Enter any no:";
    cin>>n;
    printNo(n);
    return 0;
}