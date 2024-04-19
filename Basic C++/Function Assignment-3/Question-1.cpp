#include<iostream>
#include<string>
using namespace std;

void sort(int,int,int=1);

int main(){
    
    int size;
    cout<<"Enter the size of  array "<<endl;
    cin>>size;
    int arr[size],i=0;
    cout<<"Enter the elements "<<endl;
    while(i<size){
        cin>>arr[i];
        i++;
    }
    int choose;
    cout<<"Enter the choice of Sort"<<endl;
    cin>>choose;
    sort(arr,size,choose);
    cout<<endl;
    return 0;
}

void sort(int arr[],int size,int choose){

    if(choose){
        for(int i=1;i<size-1;i++){
            for(int j=0;j<size-i;j++){
                if(arr[j]>=arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    else{
        for(int i=1;i<size-1;i++){
            for(int j=0;j<size-i;j++){
                if(arr[j]<=arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    int i=0;
    while(i<size){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

}
