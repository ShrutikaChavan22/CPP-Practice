//given an array of intergers change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5};
    for(int i=0;i<sizeof(arr)/4;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        if(i%2!=0){
            arr[i]*=2;
        }
    }
    for(int i=0;i<sizeof(arr)/4;i++){
        cout<<arr[i]<<" ";
    }
        return 0;
}