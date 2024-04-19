#include<iostream>
using namespace std;

bool palindrome(char*);

int main(){

    char str[20];
    cout<<"Enter the string"<<endl;
    fgets(str,20,stdin);
    bool check = palindrome(str);
    if(check)
    cout<<"Is Palindrome  "<<endl;
    else
    cout<<"Is not Palindrome  "<<endl;

    cout<<endl;
    return 0;
}

bool palindrome(char *s){
    int i=0;
    for(i=0;s[i];i++);
    s[--i]='\0';
    int len = i;
    for(i=0;i<len/2;i++){
        if(s[i] != s[len-1-i])
        return false;
    }
    return true;
}