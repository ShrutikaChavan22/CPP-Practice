#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price:";
    cin>>cp;
    cout<<"Enter selling price:";
    cin>>sp;
    if(sp==cp){
        cout<<"No Profit and No Loss";
    }
    else if(sp>cp){
        cout<<"Profit is: "<<sp-cp;
    }
    else{
        cout<<"Loss is: "<<cp-sp;
    }
    return 0;
}
