#include <iostream>
using namespace std;

int main()
{

    char str[20];
    int i;
    cout << "Enter the name" << endl;
    fgets(str, 20, stdin);

    for (i = 0; str[i]; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }
    }
    str[i-1] = '\0';
    cout<<"Lowercase name is "<<str<<endl;
    cout << endl;
    return 0;
}