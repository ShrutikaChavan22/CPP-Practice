/*print the given pattern
*****
*****
*****   */
#include<iostream>
using namespace std;
int main(){
   int row,col;
   cout<<"Enter Rows:";
   cin>>row;
   cout<<"Enter column:";
   cin>>col;
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          cout<<"* ";
       }
       cout<<endl;
    }
    return 0;
}