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

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of numbers Stored in array is :- " << sum << endl;
    return 0;
}