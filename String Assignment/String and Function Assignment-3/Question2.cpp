#include <iostream>
using namespace std;

void reverse(char*);
int main()
{

    char str[40];
    cout << "Enter the name" << endl;
    fgets(str, 40, stdin);
    reverse(str);
    cout<<"Reverse string is "<<str<<endl;
    cout << endl;
    return 0;
}

void reverse(char *str){
    int i;
    for( i=0;str[i];i++);
    str[--i] = '\0';
    int len = i;
    for(i=0;i<len/2;i++){
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
}
