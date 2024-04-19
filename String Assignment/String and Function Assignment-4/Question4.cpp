#include <iostream>
using namespace std;

void swaps(char *, int,int);
int main()
{

    char str[20];
    int i=0,j=0;
    cout << "Enter the string " << endl;
    fgets(str, 20, stdin);
    cout << "Give two character index to swap " << endl;
    cin >> i>>j;
    swaps(str, i,j);
    cout << "After the swapping " << str << endl;
    cout << endl;
    return 0;
}

void swaps(char *s, int i,int j)
{
    char temp  = s[1];
    s[i] = s[j];
    s[j] = temp;
}