//Find the maximum element in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={9,4,2,0,1,7};
    int mx=INT16_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           mx=max(mx,a[i][j]);
        }  
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }  
        cout<<endl;
    }
    cout<<"Maximum Element:"<<mx<<endl;
    return 0;
}