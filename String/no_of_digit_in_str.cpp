//return the totla number of digits in a number without using any loop
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x=12345;
    string s=to_string(x);
    cout<<"Total number of digit:"<<s.length()<<endl;
    return 0;
}