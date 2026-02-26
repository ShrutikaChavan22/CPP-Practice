//Input a string of size n and update all the even positions in the string to character 'a'.Consider 0-based indexing.
#include<iostream>
using namespace std;
int main(){
    string str="Good Morning";
    for(int i=0;i<str.length();i++){
        if(i%2==0){
            str[i]='a';
        }
    }
    cout<<"After updating string:"<<str<<endl;
    return 0;
}