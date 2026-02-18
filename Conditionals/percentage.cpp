//take input percentage of a student and print the grade according to the marks
#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"Enter the percentage of student:";
    cin>>percentage;
    if(percentage>81 and percentage<100){
        cout<<"Very good";
    }
    else if(percentage>61 and percentage<80){
        cout<<"good";
    }
    else if(percentage>41 and percentage<60){
        cout<<"average";
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}