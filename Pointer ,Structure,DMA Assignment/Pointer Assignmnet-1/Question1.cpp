#include<iostream>
using namespace std;

void swaps(int*,int*);
int main(){

    int num1,num2;
    cout<<"Enter the two number "<<endl;
    cin>>num1>>num2;
    swaps(&num1,&num2);
    cout<<"num1 = "<<num1<<endl<<"num2 = "<<num2<<endl;
    cout<<endl;
    return 0;
}

void swaps(int *a,int* b){

    int temp = *a;
    *a = *b;
    *b = temp;
}