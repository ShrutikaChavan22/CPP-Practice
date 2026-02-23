//count the number of elements in given array greater than a given number x.
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,3,0,10,2,5,6},x=4,count=0;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"Count :"<<count;
        return 0;
}