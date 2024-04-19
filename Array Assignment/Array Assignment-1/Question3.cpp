#include<iostream>
using namespace std;

int arr1[2];

void sumEvenOdd(int arr[],int size){
    int sumeven = 0, sumodd = 0;
    for (int i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        sumeven += arr[i];
        else{
            sumodd += arr[i];
        }
    }
    arr1[0] = sumeven;
    arr1[1] = sumodd;
}

int main(){
    int size;
    
    cout << "Size of array " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sumEvenOdd(arr,size);
    cout<<"sum of even "<<arr1[0]<<endl;
    cout<<"sum of odd "<<arr1[1]<<endl;
    return 0;
}