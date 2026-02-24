//Write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    int a[4][2]={{55,99},{34,49},{32,78},{20,80}};
    cout<<"Roll no and Marks:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;  
    }
    return 0;
}