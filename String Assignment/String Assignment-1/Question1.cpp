#include<iostream>
using namespace std;

int main(){

    char str[50];
    int i;
    cout<<"Enter the String "<<endl;
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1] = '\0';
    cout<<"Length of string is "<<i-1<<endl;
    cout<<endl;
    return 0;
}