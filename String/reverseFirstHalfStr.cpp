//Input a string of even length and reverse the first half of the string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="Hiii";
    cout<<s<<endl;
    int n=s.length();
    reverse(s.begin(),s.begin()+n/2);
    // int i=0;
    // int j=n/2-1;
    // while(i<j){
    //     int temp=s[i];
    //     s[i]=s[j];
    //     s[j]=temp;
    //     i++;
    //     j--;
    // }
    cout<<s<<endl;
    return 0;
}