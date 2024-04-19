#include<iostream>
using namespace std;

int  firstAdjacentDuplicateValue(int arr[],int size){

     for (int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }

    for(int i=0;i<size-1;i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
    return -1; // if no duplicate value found
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

    int duplicateNumber = firstAdjacentDuplicateValue(arr, size);
    cout<<"Duplicate value is : "<<duplicateNumber<<endl;
    return 0;
}