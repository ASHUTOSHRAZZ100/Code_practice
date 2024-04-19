#include<iostream>
using namespace std;

void searchOccurrence(char *,char,int*);
void print(int *,int);
int main(){
    int size=0,i=0;
    cout<<"Enter the size"<<endl;
    cin>>size;
    char str[size],ch;
    int arr[size];
    cout<<"Enter the string "<<endl;
    fflush(stdin);
    fgets(str,size,stdin);
    cout<<"Enter the character "<<endl;
    cin>>ch;
    for(i=0;str[i];i++);
    str[--i]='\0';
    searchOccurrence(str,ch,arr);
    cout<<endl;
    return 0;
}

void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void searchOccurrence(char *str,char ch,int *arr){
    int i=0,j=0;
    for( i=0,j=0;str[i];i++){
        if(ch==str[i])
        {
            arr[j++]=i;
        }
    }
    print(arr,j);
}