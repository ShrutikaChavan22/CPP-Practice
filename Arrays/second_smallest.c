// find the second smallest element in the given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,40,2,34,56,78};
    int n=sizeof(arr)/4;
    int mn=INT_LEAST16_MAX;
    for(int i=1;i<n;i++){
           mn=min(mn,arr[i]);
    }
    int smn=INT_LEAST16_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]!=mn)
         smn=min(smn,arr[i]);
    }
    cout<<"Second largest element:"<<smn;
    return 0;
}