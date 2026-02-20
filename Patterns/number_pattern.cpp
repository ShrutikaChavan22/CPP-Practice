/*print the given pattern
1
13
135
1357   */
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter number:";
   cin>>m;
    for(int i=1;i<=m;i++){
       for(int j=i;j<=m;j++){
          cout<<j<<" ";
       }
       cout<<endl;
    }
    return 0;
}