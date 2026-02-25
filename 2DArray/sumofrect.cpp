//Given a matrix "a" of dimension n*m and 2 coordinates (l1,r1) and (l2,r2).Return the sum of the rectangle from (l1,r1) to (l1,r2)
#include<iostream>
using namespace std;
int main(){
    int a[5][4]={{1,2,3,4},{5,4,10,11},{6,12,15,16},{7,13,17,19},{8,14,18,20}};
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
           cout<<a[i][j]<<" ";
        }  
        cout<<endl;
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<3;j++){
           cout<<a[i][j]<<" ";
        }  
        cout<<endl;
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<3;j++){
           sum+=a[i][j];
        }  
    }
    cout<<"sum:"<<sum<<endl;
    return 0;
}