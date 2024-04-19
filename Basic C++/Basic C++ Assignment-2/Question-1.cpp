#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3,sum;
    float avg;
    cout<<"Enter the numbers "<<endl;
    cin>>num1>>num2>>num3;

    sum = num1+num2+num3;
    avg = sum/3;
    cout<<"Average of numbers is "<<avg<<endl;
    return 0;
}