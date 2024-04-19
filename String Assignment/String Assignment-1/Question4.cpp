#include <iostream>
using namespace std;

int main()
{
    char str[20];
    cout << "Enter the String " << endl;
    fgets(str, 20, stdin);
    int count = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    cout << "Space in a given string is " << count << endl;
    cout << endl;
    return 0;
}