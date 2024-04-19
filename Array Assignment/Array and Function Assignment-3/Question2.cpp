#include<iostream>
using namespace std;

int small_number(int arr[],int size){
    int small = arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]<small)
        small = arr[i];
    }

    return small;
}
int main(){
    int size;
    cout<<"Enter the size "<<endl;
    cin>>size;
    cout<<"Enter the elements in the array "<<endl;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int small = small_number(arr,size);
    cout<<"Greatest Number is : "<<small<<endl;
    return 0;
}