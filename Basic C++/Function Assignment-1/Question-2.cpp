#include <iostream>
using namespace std;

int highestValue(int);
int main()
{
    int num1;
    cout << "Enter the number " << endl;
    cin >> num1;
    cout<<"Highest value is : "<<highestValue(num1);
    cout << endl;
    return 0;
}

int highestValue(int num)
{
    int highest = 0,rem;
    while(num !=0){
        rem = num%10;
        if(highest <= rem)
        highest = rem;
        num /= 10;
    }

    return highest;
}