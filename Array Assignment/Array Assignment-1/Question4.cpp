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

    int great = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]>=great)
        great = arr[i];
    }

    cout << "Greatest numbers is :- " << great << endl;
    return 0;
}