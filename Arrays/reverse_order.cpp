//WAP to copy the contents of one array to the another array in the reverse order
#include<iostream>
using namespace std;
int main(){
    int a[]={20,40,2,34,56,78};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
           b[i]=a[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}