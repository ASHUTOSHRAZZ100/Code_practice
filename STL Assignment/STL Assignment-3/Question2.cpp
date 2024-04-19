#include<iostream>
#include<array>
using namespace std;

int main(){

    array<float,5> arr1 = {12.56,15.2,10.56,1.23,25.68};
    float sum = 0,avg = 0;
    
    array<float,5>::iterator it = arr1.begin();
    for(it;it<arr1.end();it++){
        sum += *it;
    }
    avg = sum/arr1.size();
    cout<<"Average of number :- "<<avg<<endl;
    return 0;
}