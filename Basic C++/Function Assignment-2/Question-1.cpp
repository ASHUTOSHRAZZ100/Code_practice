#include<iostream>
using namespace std;

void Swap(int & ,int & );
int main(){
    int a,b;
    cout<<"Enter the two value "<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<"After swapping the value "<<endl;
    cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
    cout<<endl;

    return 0;
}

void Swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}