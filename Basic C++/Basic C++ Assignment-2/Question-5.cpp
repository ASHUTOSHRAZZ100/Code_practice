#include <iostream>
using namespace std;

int main()
{
    int sum = 0, arr[10];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    for (int i = 0; i < 10; i++)
        sum += arr[i];

    cout << "Sum of array is " << sum << endl;
    return 0;
}