//Find the sum of all the elements in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={9,4,2,0,1,7};
    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           sum+=a[i][j];
        }  
    }
    cout<<"Sum of all Element:"<<sum<<endl;
    return 0;
}