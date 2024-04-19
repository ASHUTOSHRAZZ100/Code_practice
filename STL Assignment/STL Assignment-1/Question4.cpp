#include<iostream>
using namespace std;

template<typename X>
void sort_array(X arr[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                X temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sort array is :- " <<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
template <typename X>
void array(X arr[], int size)
{

    cout << "Enter the value " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort_array(arr,size);
}int main(){
    int arr[5];
    float arr1[6];
    array(arr, 5);
    array(arr1, 6);
    return 0;
}