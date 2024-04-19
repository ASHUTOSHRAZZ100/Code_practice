#include <iostream>
using namespace std;

int main()
{

    char str[40],str1[40];
    int i;
    cout << "Enter the name" << endl;
    fgets(str, 40, stdin);

    int alp = 0, dig = 0, spec = 0;
    for ( i = 0; str[i]; i++);
    str[--i]='\0';
    for ( i = 0; str[i]; i++)
    {
        str1[i] = str[i];
    }
    str1[i]='\0';
    cout<<"String is "<<str<<endl; 
    cout<<"Copy string is "<<str1<<endl;
    cout << endl;
    return 0;
}