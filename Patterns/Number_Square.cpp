/*print the given pattern
1234
1234
1234
1234   */
#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"Enter number:";
   cin>>m;
    for(int i=1;i<=m;i++){
       for(int j=1;j<=m;j++){
          cout<<j;
       }
       cout<<endl;
    }
    return 0;
}