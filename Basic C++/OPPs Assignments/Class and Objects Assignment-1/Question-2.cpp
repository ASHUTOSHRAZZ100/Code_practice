#include<iostream>
using namespace std;

class Time{
    int hour,minute,second;
    public:
    void setvalue(int hr=0,int min=0,int sec=0);
    void display();
};

void Time::setvalue(int hr,int min,int sec){
    hour = hr;
    minute = min;
    second = sec;
}

void Time::display(){
    cout<<"\n"<<hour<<" hr "<<minute<<" min "<<second<<" sec"<<endl;
}

int main(){

    int hr,min,sec;
    cout<<"Enter the Hour"<<endl;
    cin>>hr;
    cout<<"Enter the Minute"<<endl;
    cin>>min;
    cout<<"Enter the Second"<<endl;
    cin>>sec;
    Time t1;
    t1.setvalue(hr,min,sec);
    t1.display();
    return 0;
}