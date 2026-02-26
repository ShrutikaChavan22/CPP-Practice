//Input a string of even length and reverse the first half of the string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x=12345;
    string s=to_string(x);
    s+="dd";
    cout<<s<<endl;
    return 0;
}