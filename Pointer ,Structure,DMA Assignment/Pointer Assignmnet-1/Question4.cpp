#include<iostream>
using namespace std;

void lowercase(char*);
void print(char *);

int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    char str[size];
    cout<<"Enter the string"<<endl;
    fflush(stdin);
    fgets(str,size,stdin);
    lowercase(str);
    print(str);
    cout<<endl;
    return 0;
}

void print(char *str){
    cout<<"In Lowercase "<<str<<endl;
    cout<<endl;
}
void lowercase(char* str){

    int i=0;
    for(i=0;str[i];i++);
    str[--i]='\0';
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] += 32;
        }
    }
}