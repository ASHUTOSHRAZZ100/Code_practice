#include <iostream>
using namespace std;

bool alphanumeric(char *);
int main()
{

    char str[20], cha;
    cout << "Enter the string " << endl;
    fgets(str, 20, stdin);
     bool check = alphanumeric(str);
    cout << "Alphanumeric "<< "= " << check  << endl;
    cout << endl;
    return 0;
}

bool alphanumeric(char *s)
{
    int i = 0;
    for (i = 0; s[i]; i++)
        ;
    s[--i] = '\0';
    int count =0;
    for(i=0;s[i];i++){
        if((s[i]>='A'&&s[i]<='Z') || (s[i]>='0'&&s[i]<='9')){
            count++;
            if(count>1)
            break;
        }
    }
    if(count>=2)
    return true;
    else
    return false;
}