#include<iostream>
using namespace std;

float add(int ,float);
float add(float,int);



int main(){
    float num1;
    int num2;
    cout<<"Give Integer value"<<endl;
    cin>>num2;
    cout<<"Give Float value"<<endl;
    cin>>num1;

    float area_circle = add(num1,num2);
    float area_rectangle = add(num2,num1);

    cout<<"circle area is "<<area_circle<<endl;
    cout<<"Rectangle area is "<<area_rectangle<<endl;
    cout<<endl;
    return 0;
}


float add(int num1,float num2){
    float sum  = num1+num2;
    return sum;
}
float add(float num1,int num2){
    float sum  =  num1*num2;
    return sum;
}
