#include<iostream>
using namespace std;
int main(){
    int x=4,y=0;
    while(x>=0){
        x--;//3 2 1 0
        y++;//1 2 3 4
        if(x==y)//3==1 
            continue;
        else//1 2 2
             cout<<x<<" "<<y<<endl;
    }
    return 0;
}