#include <iostream>
using namespace std;

int main()
{

    char str[40];
    cout << "Enter the name" << endl;
    fgets(str, 40, stdin);

    int alp = 0, dig = 0, spec = 0;
    for (int i = 0; str[i]; i++)
    {

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alp++;
        else if (str[i] >= '0' && str[i] <= '9')
            dig++;
        else
            spec++;
    }
    cout << "Alphabets = " << alp << endl;
    cout << "Digits = " << dig << endl;
    cout << "Special = " << spec << endl;
    cout << endl;
    return 0;
}