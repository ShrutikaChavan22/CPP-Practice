#include<iostream>
using namespace std;
int main(){
    float area,perimeter,l,b;
    cout<<"Enter length of rectangle:";
    cin>>l;
    cout<<"Enter breadth of rectangle:";
    cin>>b;
    area=l*b;
    perimeter=2*(l+b);
    cout<<"Area of Rectangle:"<<area<<endl;
    cout<<"Perimeter of Rectangle:"<<perimeter<<endl;
    if(area>perimeter){
        cout<<"Area of rectangle is greater than its perimeter"<<endl;
    }
    else{
        cout<<"Area of rectangle is not greater than its perimeter"<<endl;
    }
    
    return 0;
}
