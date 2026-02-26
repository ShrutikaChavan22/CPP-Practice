//Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="Shrutika";
    cout<<s<<endl;
    int n=s.length();
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
    return 0;
}