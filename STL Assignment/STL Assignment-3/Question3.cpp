#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,10>arr1;

    cout<<"Enter the element "<<endl;
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    int greater_value = 0;
    array<int ,10>::iterator it;
    for(it=arr1.begin();it!=arr1.end();it++){
        if(*it>=greater_value){
            greater_value = *it;
        }
    }

    cout<<"Greatest element is :- "<<greater_value<<endl;
    return 0;
}