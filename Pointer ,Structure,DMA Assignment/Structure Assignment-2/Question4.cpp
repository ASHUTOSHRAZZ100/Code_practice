#include<iostream>
using namespace std;

struct Marks userInput();
void print(struct Marks *,int);
void pec(struct Marks *,int);

struct Marks{
    char name[30];
    long rollno;
    double maths_marks;
    double chemistry_marks;
    double PHysics_marks;
    double percentage;
};

int main(){
    int size;
    cout<<"Number of students are"<<endl;
    cin>>size;

    struct Marks s[size];

    for(int i=0;i<size;i++)
    s[i] = userInput();

    pec(s,size);
    print(s,size);
    cout<<endl;
    return 0;
}
struct Marks userInput(){

    struct Marks s;
    cout<<"Enter the Student name"<<endl;
    fflush(stdin);
    fgets(s.name,30,stdin);
    cout<<"Enter the Roll Number"<<endl;
    cin>>s.rollno;
    cout<<"Math marks"<<endl;
    cin>>s.maths_marks;
     cout<<"Chemistry marks"<<endl;
    cin>>s.chemistry_marks;
    cout<<"Physics marks = "<<endl;
    cin>>s.PHysics_marks;
    return s;
}

void print(struct Marks *s,int size ){
    cout<<"Name    "<<"Roll no.    "<<"Total percentage"<<endl;
    for(int i=0;i<size;i++){
        cout<<(s+i)->name<<"            "<<(s+i)->rollno<<"    "<<(s+i)->percentage<<endl; 
    }
    cout<<endl;
}

void pec(struct Marks *s,int size){
    double avg;
    for(int i=0;i<size;i++){
        avg = ((s+i)->maths_marks+(s+i)->chemistry_marks+(s+i)->PHysics_marks)/300;
        (s+i)->percentage = avg*100;
    }
    cout<<endl;
}
