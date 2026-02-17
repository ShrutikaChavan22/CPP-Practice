//if the ages of ram,shyam and ajay are input through the keyboard,write a program to determine youngest of them
#include<iostream>
using namespace std;
int main(){
    int ram,shyam,ajay;
    cout<<"Enter ram age:";
    cin>>ram;
    cout<<"Enter shyam age:";
    cin>>shyam;
    cout<<"Enter ajay age:";
    cin>>ajay;
    if(ram<shyam){
        if(ram<ajay){
            cout<<ram<<" is younger";
        }
        else{
            cout<<ajay<<" is younger";
        }
    }
    else {
        if(shyam<ajay){
            cout<<shyam<<" is younger";
        }
        else{
            cout<<ajay<<" is youner";
        }
      }
    return 0;
}
