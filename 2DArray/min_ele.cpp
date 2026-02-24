//Find the minimum element in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={9,4,2,0,1,7};
    int mn=INT16_MAX;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           mn=min(mn,a[i][j]);
        }  
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           cout<<a[i][j]<<" ";
        }  
        cout<<endl;
    }
    cout<<"Maximum Element:"<<mn<<endl;
    return 0;
}