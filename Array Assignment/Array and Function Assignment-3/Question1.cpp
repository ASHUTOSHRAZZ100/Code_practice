#include<iostream>
using namespace std;

int largest_number(int arr[],int size){
    int large = arr[0];

    for(int i=1;i<size;i++){
        if(arr[i]>large)
        large = arr[i];
    }

    return large;
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
    int large = largest_number(arr,size);
    cout<<"Greatest Number is : "<<large<<endl;
    return 0;
}