//Find the maximum value out of all elements in the array
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,40,2,34,56,78};
    int n=sizeof(arr)/4;
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx)
           mx=arr[i];
    }
    cout<<"Maximum elements:"<<mx;
    return 0;
}