//Input a string of length n and count all the vowels in the given string
#include<iostream>
using namespace std;
int main(){
    string str="Good Morning";
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'|'e'|'i'|'o'|'u'|'A'|'E'|'I'|'O'|'U'){
            count++;
        }
    }
    cout<<"Number of vowels in string :"<<count;
    return 0;
}