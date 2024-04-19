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
    int arr1[size];
    for(int i=0;i<size;i++){
       arr1[i] =arr[i];
    }
    cout<<"old Array "<<endl;
     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"New Array "<<endl;
     for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    return 0;
}