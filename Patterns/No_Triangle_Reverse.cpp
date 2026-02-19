/*print the given pattern
1234
123
12
1   */
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter number:";
   cin>>m;
    for(int i=1;i<=m;i++){
       for(int j=1;j<=m-i+1;j++){
          cout<<j<<" ";
       }
       cout<<endl;
    }
    return 0;
}