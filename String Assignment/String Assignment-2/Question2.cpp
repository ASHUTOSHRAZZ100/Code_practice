#include<iostream>
using namespace std;

int main(){

     char str[20];
    int i;
    cout << "Enter the name" << endl;
    fgets(str, 20, stdin);
    
    for(i=0;str[i];i++);
    str[--i]='\0';
    int length = i;
    for(i=0;i<length/2;i++){
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
    cout<<"Reverse string is "<<str<<endl;
    cout<<endl;
    return 0;
}