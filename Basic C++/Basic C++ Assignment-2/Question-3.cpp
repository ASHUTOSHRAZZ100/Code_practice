#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    
    cout<<"Enter the numbers "<<endl;
    cin>>num1>>num2;
    num1 +=num2;
    num2 = num1-num2;
    num1 -=num2;
    cout<<"num1 value  is "<<num1<<endl<<"num2 value is "<<num2<<endl;
    return 0;
}