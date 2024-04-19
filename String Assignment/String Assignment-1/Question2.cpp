#include<iostream>
using namespace std;

int main(){

    char str[50],ch;
    int i,count=0;
    cout<<"Enter the String "<<endl;
    fgets(str,50,stdin);
    cout<<"Enter the Character "<<endl;
    cin>>ch;
    for(i=0;str[i];i++){
        if(str[i] == ch)
        count++;
    }
    str[i-1] = '\0';
    cout<<"Occurrence of  "<<ch<<" = "<<count<<endl;
    cout<<endl;
    return 0;
}