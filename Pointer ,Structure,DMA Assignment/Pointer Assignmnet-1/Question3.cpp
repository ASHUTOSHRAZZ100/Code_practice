#include<iostream>
using namespace std;

void uppercase(char*);
void print(char *);

int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    char str[size];
    cout<<"Enter the string"<<endl;
    fflush(stdin);
    fgets(str,size,stdin);
    uppercase(str);
    print(str);
    cout<<endl;
    return 0;
}

void print(char *str){
    cout<<"In Uppercase "<<str<<endl;
    cout<<endl;
}
void uppercase(char* str){

    int i=0;
    for(i=0;str[i];i++);
    str[--i]='\0';
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
}