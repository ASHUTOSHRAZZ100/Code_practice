#include <iostream>
using namespace std;

int main()
{

    char str[40],cha;
    int i;
    cout << "Enter the name" << endl;
    fgets(str, 40, stdin);

    cout<<"Enter the character "<<endl;
    cin>>cha;

    for ( i = 0; str[i]; i++);
    str[--i]='\0';
    for ( i = 0; str[i]; i++)
    {
        if(str[i]==cha)
        break;
    }
    if(str[i])
    cout<<"Occurrence of"<<cha<<" found at "<<i+1<<endl;
    else
    cout<<"Occurrence of"<<cha<<" not found at "<<endl;

    cout << endl;
    return 0;
}