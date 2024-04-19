#include <iostream>
using namespace std;

void lowercase(char *s)
{
    int i = 0;
    for (i = 0; s[i]; i++);
    s[--i] = '\0';
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}
int main()
{

    char str[20];
    cout << "Enter the name" << endl;
    fgets(str, 20, stdin);
    lowercase(str);
    cout << "Lowercase name is " << str << endl;
    cout << endl;
    return 0;
}