#include <iostream>
using namespace std;

void swapStrings(char *, char *);
void print(char *, char *);

int main()
{
    int size = 0, i = 0,j=0;
    cout << "Enter the size of char" << endl;
    cin >> size;
    char str[size], str1[size];
    cout << "Enter the first string" << endl;
    fflush(stdin);
    fgets(str, size, stdin);
    cout << "Enter the second string" << endl;
    fflush(stdin);
    fgets(str1, size, stdin);
    for(i=0,j=0;str[i];i++,j++);
    str[--i] = '\0';
    str[--j] = '\0';
    swapStrings(str,str1);
    print(str,str1);
    cout << endl;
    return 0;
}
void print(char *str, char *str1)
{
    cout << "First string " << str << endl;
    cout << "Second string " << str1 << endl;
    cout << endl;
}
void swapStrings(char *str, char *str1)
{
    int i = 0;
    for (i = 0; str[i]; i++)
    {
        char ch = str[i];
        str[i] = str1[i];
        str1[i] = ch;
    }
}
