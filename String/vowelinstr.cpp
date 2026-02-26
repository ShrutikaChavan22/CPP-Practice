//Input a string of length n and count all the vowels in the given string
#include<iostream>
using namespace std;
int main(){
    string str="Good Morning";
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    cout<<"Number of vowels in string :"<<count;
    return 0;
}