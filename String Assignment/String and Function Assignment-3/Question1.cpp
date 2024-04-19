#include <iostream>
using namespace std;

int length(char*);
int main()
{

    char str[40];
    cout << "Enter the name" << endl;
    fgets(str, 40, stdin);
    int len = length(str);
    cout<<"Length = "<<len<<endl;
    cout<<"string is "<<str ;
    cout << endl;
    return 0;
}

int length(char *str){
    int i;
    for( i=0;str[i];i++);
    str[--i] = '\0';
    return i;
}
