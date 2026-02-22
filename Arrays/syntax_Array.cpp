#include<iostream>
using namespace std;
int main(){
    //declaration method 1
    int arr[5];
    cout<<"Enter Array Elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array Elements are:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //declaration method 1
    int nums[]={10,40,20,30,50};
    cout<<"Array Elements are:";
    for(int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}