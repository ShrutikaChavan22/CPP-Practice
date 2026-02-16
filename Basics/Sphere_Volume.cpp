//Volume of sphere =4/3*PI*r*r
#include<iostream>
using namespace std;
int main(){
    float r,PI=3.14;
    cout<<"Enter Radius:";
    cin>>r;
    float Volume_Sphere=4/3*PI*r*r;
    cout<<"Volume of sphere:"<<Volume_Sphere;
    return 0;
}