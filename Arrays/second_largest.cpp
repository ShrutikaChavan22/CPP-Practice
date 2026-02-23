// find the second largest element in the given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,40,2,34,56,78};
    int n=sizeof(arr)/4;
    int mx=INT_LEAST16_MIN;
    for(int i=1;i<n;i++){
           mx=max(mx,arr[i]);
    }
    int smx=INT_LEAST16_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]!=mx)
         smx=max(smx,arr[i]);
    }
    cout<<"Second largest element:"<<smx;
    return 0;
}