//given an interger n. create an array containing squares of all natural numbers till n and print the elements of the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Any number:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        cout<<"square of "<<arr[i]<<" is: "<<arr[i]*arr[i]<<endl;
    }
        return 0;
}