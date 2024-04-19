#include<iostream>
using namespace std;

void extract_string(char*,int,int,char*);
void print(char *);

int main(){
    int size=0,i=0,start_index=0,end_index=0;
    cout<<"Enter the size"<<endl;
    cin>>size;
    char str[size],result[size];
    cout<<"Enter the string"<<endl;
    fflush(stdin);
    fgets(str,size,stdin);
    cout<<"Enter the start index and end index"<<endl;
    cin>>start_index>>end_index;
    for(i=0;str[i];i++);
    str[--i]='\0';
    extract_string(str,start_index,end_index,result);
    print(result);
    cout<<endl;
    return 0;
}

void print(char *str){
    cout<<"Substring is  "<<str<<endl;
    cout<<endl;
}

void extract_string(char*str,int start,int end,char* result){

    int i=0,j=0;
    for(i=start;i<end;i++,j++){ result[j]=str[i];}
    result[j] = '\0';
}