#include <iostream>
using namespace std;

int occurrenceChar(char *, char);
int main()
{

    char str[20], cha;
    cout << "Enter the string " << endl;
    fgets(str, 20, stdin);
    cout << "Enter the Character " << endl;
    cin >> cha;
    int position = occurrenceChar(str, cha);
    cout << "First Occurrence of  " << cha << "= " << position << endl;
    cout << endl;
    return 0;
}

int occurrenceChar(char *s, char cha)
{
    int i = 0;
    for (i = 0; s[i]; i++)
        ;
    s[--i] = '\0';
    for (i = 0; s[i]; i++)
        if (s[i] == cha)
            return i+1;
    return -1;
}