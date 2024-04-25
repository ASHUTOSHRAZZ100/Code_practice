#include<iostream>
using namespace std;

void merge(int*,int,int*,int,int*);
void userInput(int*,int);
void print(int*,int);

int main(){
    int size,size1;
    cout<<"Enter the first size of array"<<endl;
    cin>>size;
    cout<<"Enter the second size of array"<<endl;
    cin>>size1;
    int arr[size],arr1[size1],arr2[size+size1];
    userInput(arr,size);
    userInput(arr1,size1);
    merge(arr,size,arr1,size1,arr2);
    print(arr2,(size+size1));
    cout<<endl;
    return 0;
}

void userInput(int* arr,int size){
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void merge(int* arr,int size,int* arr1,int size1,int* arr2)
{
    for(int i=0;i<size;i++)
    arr2[i] = arr[i];
    for(int i=0,j=size;i<size1;i++,j++)
        arr2[j] = arr1[i];
}
void print(int* arr,int size)
{
    cout<<"Merge array are :-"<<endl;
    for(int i=0;i<size;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}