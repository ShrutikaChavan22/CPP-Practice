//calculate the sum of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
    int arr[]={20,40,2,34,56,78};
    int n=sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements:"<<sum;
    return 0;
}