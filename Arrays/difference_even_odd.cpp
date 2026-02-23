// find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;
int main(){
   int arr[]={1,3,0,10,2,5,6};
   int sumeven=0,sumodd=0;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(i%2==0){
            sumeven+=arr[i];
        }
        if(i%2!=0){
            sumodd+=arr[i];
        }
    }
    cout<<"Sum of even index: "<<sumeven<<endl;
    cout<<"Sum of odd index: "<<sumodd<<endl;
    cout<<"Difference: "<<sumeven-sumodd;
    return 0;
}