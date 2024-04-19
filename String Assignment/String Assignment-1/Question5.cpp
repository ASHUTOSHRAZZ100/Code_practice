#include <iostream>
using namespace std;

int main()
{
    char str[20];
    int i;
    cout << "Enter the String " << endl;
    fgets(str, 20, stdin);

    for ( i = 0; str[i]!='\0'; i++)
    {
        if(str[i] >='a' && str[i] <='z')
        str[i] = str[i]-32;
    }
    str[i-1] = '\0';
    cout << "Uppercase in a given string is " << str << endl;
    cout << endl;
    return 0;
}