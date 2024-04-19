#include<iostream>
using namespace std;

class Time{
    
    // h-Hour,m-Minute,s-Second
    double h,m,s;
    public:
    void setTime(double,double,double);
    void showTime();
    void normalize();
    Time add(Time);
    bool is_greater(Time);
};

void Time::setTime(double hour,double min,double sec){
    h = hour;m = min;s = sec;
}
    void Time::showTime(){
        cout<<endl<<h<<" : "<<m<<" : "<<s<<endl;
    }
    void Time::normalize(){
    
    }
    Time Time::add(Time t){

    }
    bool Time::is_greater(Time t){

    }

int main(){

    Time t1;
    t1.setTime(12,59,9);
    t1.showTime();
    cout<<endl;
    return 0;
}