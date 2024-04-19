#include<iostream>
using namespace std;

void rotate(int arr[],int size,string direction,int position){
    
    position %= size;
    int k=0;
    
    if(direction == "left"){ 
        int arr1[position];
        for(int i=0;i<position;i++){
            arr1[i] = arr[i];
        }
        for(int i=0;i<size-position;i++)
        arr[i] = arr[i+2];

        for(int i=size-position;i<size;i++)
        arr[i] = arr1[k++];
    }
    else{
        int arr1[size-position];
        
        for(int i=0;i<size-position;i++){
            arr1[i] = arr[i];
        }
        for(int i=size-position;i<size;i++)
        arr[k++] = arr[i];
        k=0;
        for(int i=position;i<size;i++)
        arr[i] = arr1[k++];
    }

    cout<<"Rotate array is :"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int size,pos;
    string dir;
    cout<<"Enter the size "<<endl;
    cin>>size;
    cout<<"Enter the elements in the array "<<endl;
    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the direction of the "<<endl;
    cin>>dir;
    cout<<"Enter the position of the array"<<endl;
    cin>>pos;
    rotate(arr, size,dir,pos);
    cout<<endl;
    return 0;
}