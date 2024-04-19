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
    int smallest = arr[0],second_smallest = INT8_MAX;

    for(int i=1;i<size;i++){
        if(arr[i]<smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<second_smallest){
            second_smallest = arr[i];
        }
    }

    cout<<"Second largest number is : "<<second_smallest<<endl;
    return 0;
}