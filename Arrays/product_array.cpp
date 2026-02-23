//calculate the product of all the elements in the given array
#include<iostream>
using namespace std;
int main(){
    long arr[]={20,40,2,34,56,78};
    int n=sizeof(arr)/4;
    long product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    cout<<"product of all elements:"<<product;
    return 0;
}