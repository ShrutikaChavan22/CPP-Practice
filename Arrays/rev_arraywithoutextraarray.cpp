//reverse the array without using extra array
#include<iostream>
using namespace std;
int main(){
    int a[]={20,40,2,34,56,78};
    int n=sizeof(a)/4;
    cout<<"Array elements are:";
    for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
    }
    cout<<endl;
    int i=0,j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<"Reverse array:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}