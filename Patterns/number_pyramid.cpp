/*print the given pattern
       1 
     1 2 3
   1 2 3 4 5
 1 2 3 4 5 6 7  */
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number:";
   cin>>n;
   /* for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
          cout<<"  ";
       }
       for(int j=1;j<=2*i-1;j++){
          cout<<j<<" ";
       }                                                          OR           */

    //Method 2 -> nst and nsp
   int nsp=n-1;
   int nst=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=nsp;j++){
          cout<<"  ";
       }
       for(int j=1;j<=nst;j++){
          cout<<j<<" ";
       }
       nsp--;
       nst+=2;
       cout<<endl;
    } 
    return 0;
}