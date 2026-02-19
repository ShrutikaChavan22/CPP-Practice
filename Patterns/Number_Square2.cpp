/*print the given pattern
1111
2222
3333
4444  */
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter number:";
   cin>>m;
    for(int i=1;i<=m;i++){
       for(int j=1;j<=m;j++){
          cout<<i;
       }
       cout<<endl;
    }
    return 0;
}