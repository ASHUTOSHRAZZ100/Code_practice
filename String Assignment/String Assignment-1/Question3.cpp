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
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            count++;
    }
    cout << "Vowels in a given string is " << count << endl;
    cout << endl;
    return 0;
}