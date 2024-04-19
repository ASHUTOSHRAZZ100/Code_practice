#include <iostream>
using namespace std;

void swa(int[], int[], int);

int main()
{
    int size;
    cout << "Enter the size of array and both array have same size " << endl;
    cin >> size;

    int arr[size], arr1[size];
    cout << "Enter the elements of Array 1 " << endl;

    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter the elements of Array 2 " << endl;

    for (int i = 0; i < size; i++)
        cin >> arr1[i];

    swa(arr, arr1, size);
    cout << endl;
    return 0;
}

void swa(int arr[], int arr1[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        arr[i] = arr1[i];
        arr1[i] = temp;
    }

    cout<<"Array 1 value is : "<<endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout<<"Array 2 value is : "<<endl;

    for (int i = 0; i < size; i++)
        cout << arr1[i] << " ";
    cout << endl;
}