#include <iostream>
using namespace std;

int main()
{

    int size;
    
    cout << "Size of array " << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the elements " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>=arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int largest = arr[0],secondLargest = -1;

    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]<secondLargest){
            secondLargest = arr[i];
        }
    }

    cout<<"Second largest number is : "<<secondLargest<<endl;
    return 0;
}