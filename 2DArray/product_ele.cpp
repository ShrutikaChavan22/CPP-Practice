//Find the product of all the elements in a given matrix.
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={9,4,2,2,1,7};
    int product=1;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           product*=a[i][j];
        }  
    }
    cout<<"Product of all Element:"<<product<<endl;
    return 0;
}