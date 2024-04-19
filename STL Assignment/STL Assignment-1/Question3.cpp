#include <iostream>
// #include<string>
using namespace std;

template <typename Y>
void print_array(Y arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
template <typename X>
void array(X arr[], int size)
{

    cout << "Enter the value " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    print_array(arr,size);
}



int main()
{

    int arr[5];
    float arr1[6];
    string arr2[3];
    array(arr, 5);
    array(arr1, 6);
    array(arr2, 3);
    return 0;
}