#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* ptr=&x;
    cout<<x<<endl;
    *ptr=34;//x becomes 34
    cout<<x<<endl;
    return 0;
}