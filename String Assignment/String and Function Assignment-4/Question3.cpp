#include <iostream>
using namespace std;

int occurrenceChar(char *, char,int,int);
int main()
{

    char str[20], cha;
    int start,end;
    cout << "Enter the string " << endl;
    fgets(str, 20, stdin);
    cout << "Enter the Character " << endl;
    cin >> cha;
    cout<<"Enter the start and end index "<<endl;
    cin>>start>>end;
    int position = occurrenceChar(str, cha,start,end);
    cout << "First Occurrence of  " << cha << "= " << position << endl;
    cout << endl;
    return 0;
}

int occurrenceChar(char *s, char cha,int startindex,int endindex)
{
    int i = 0;
    for (i = 0; s[i]; i++)
        ;
    s[--i] = '\0';
    for (i = startindex; s[i] && i<endindex; i++)
        if (s[i] == cha)
            return i+1;
    return -1;
}