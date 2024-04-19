#include <iostream>
using namespace std;

int compare(char *s,char *s1)
{
    int i=0;
    for (i = 0; s[i]; i++);
    s[--i]='\0';
    for (i = 0; s[i] && s1[i]; i++);
    s1[--i]='\0';

    for (i = 0; s[i] && s1[i]; i++)
    {
        if (s[i] != s[i])
        return s[i]-s1[i];
    }
    return s[i]-s1[i];
}
int main()
{

    char str[20],str1[20];
    cout << "Enter the first string" << endl;
    fgets(str, 20, stdin);
    cout << "Enter the second string" << endl;
    fgets(str1, 20, stdin);
    int num = compare(str,str1);
    cout << "compare two string is " << num << endl;
    cout << endl;
    return 0;
}