#include <iostream>
using namespace std;

long long  Power(int, int);
int main()
{
    int num1, num2;
    cout << "Enter the Two number " << endl;
    cin >> num1 >> num2;
    cout << num2<<" raised to the power "<<num1<<" is : " << Power(num1, num2);
    cout << endl;
    return 0;
}

long long Power(int y, int x)
{
    long long product = 1;
    for (int i = 1; i <= x; i++)
    {
        product *= y;
    }
    return product;
}