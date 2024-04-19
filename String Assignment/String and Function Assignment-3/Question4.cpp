#include <iostream>
using namespace std;

void uppercase(char *s)
{
    int i = 0;
    for (i = 0; s[i]; i++)
        ;
    s[--i] = '\0';
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
}
int main()
{

    char str[20];
    cout << "Enter the name" << endl;
    fgets(str, 20, stdin);
    uppercase(str);
    cout << "Uppercase name is " << str << endl;
    cout << endl;
    return 0;
}