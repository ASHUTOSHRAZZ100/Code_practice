#include<iostream>
using namespace std;
struct Student userInput();
void print(struct Student *,int);

struct Student{
    char name[30];
    long rollno;
};

int main(){
    int size;
    cout<<"Number of students are"<<endl;
    cin>>size;

    struct Student s[size];

    for(int i=0;i<size;i++)
    s[i] = userInput();

    print(s,size);
    cout<<endl;
    return 0;
}
struct Student userInput(){

    struct Student s;
    cout<<"Enter the Student name"<<endl;
    fflush(stdin);
    fgets(s.name,30,stdin);
    cout<<"Enter the Roll Number"<<endl;
    cin>>s.rollno;

    return s;
}

void print(struct Student *s,int size ){
    for(int i=0;i<size;i++){
        cout<<"Name = "<<(s+i)->name<<endl;
        cout<<"Roll no. = "<<(s+i)->rollno<<endl;  
    }
    cout<<endl;
}