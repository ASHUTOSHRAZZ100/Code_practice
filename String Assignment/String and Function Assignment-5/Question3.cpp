#include<iostream>
using namespace std;

int wordsCount(char*);
int main(){

    char str[20];
    cout<<"Enter the string"<<endl;
    fgets(str,20,stdin);
    int words = wordsCount(str);
    cout<<"Words = "<<words<<endl;
    cout<<endl;
    return 0;
}

int wordsCount(char* s){
    int i=0,count=0;
    for(i=0;s[i];i++);
    s[--i]='\0';

    for(i=0;s[i];i++){
        if(s[i]==' ')
        count++;
    }
    return count+1;
}
