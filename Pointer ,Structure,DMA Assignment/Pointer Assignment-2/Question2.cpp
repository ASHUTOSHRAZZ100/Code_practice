#include<iostream>
using namespace std;

void sort(int *,int);
void print(int *,int);

int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];
    sort(arr,size);
    print(arr,size);
    cout<<endl;
    return 0;
}

void sort(int *arr,int size){
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>=arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print(int *arr,int size){
    cout<<"Sorted elements are :-"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
