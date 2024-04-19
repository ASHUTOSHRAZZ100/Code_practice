#include<iostream>
using namespace std;

void sort_array(int arr[],int size){
    for (int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
            }
        }
    }
    cout<<"Sorted array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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
    sort_array(arr,size);
    return 0;
}