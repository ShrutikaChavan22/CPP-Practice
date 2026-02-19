//WAP to print reverse the number calculate sum of reverse and original number
#include<iostream>
using namespace std;
int main(){
    int no,rev=0,rem;
    cout<<"Enter any number:";
    cin>>no;
    int temp=no;
    while(no!=0){
        rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    cout<<"Reverse number:"<<rev<<endl;
    int sum=temp+rev;
    cout<<"sum of original and Reverse number:"<<sum;
    return 0;
}