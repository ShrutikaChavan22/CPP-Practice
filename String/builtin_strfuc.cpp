#include<iostream>
using namespace std;
int main(){
    string s="Hello";
    cout<<s<<endl;
    s.append("Guys");
    cout<<"After append:"<<s<<endl;
    cout<<s<<" "<<s.length()<<endl;
    s.clear();
    cout<<s<<" "<<s.length()<<endl;
    return 0;
}