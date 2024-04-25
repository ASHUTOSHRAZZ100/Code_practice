#include<iostream>
using namespace std;

void userInput(int*,int);
void print(int*,int);
void arrange(int*,int );
int main(){
    
    cout<<endl;
    return 0;
}
void userInput(int* arr,int size){
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void print(int* arr,int size)
{
    cout<<"Merge array are :-"<<endl;
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void arrange(int* arr,int size){
    for(int i=0;i<size;i++);
}