#include<iostream>
using namespace std;

class Date{
    int date,month,year;

    public:
    void getdate();
    void setdate(int d, int m, int y);
};

void Date::setdate(int d =1, int m=1, int y=2001){
    date = d;
    month = m;
    year = y;
}

void Date::getdate(){
    cout<<"\n d="<<date<<", m="<<month<<", y="<<year<<endl;
}

int main(){
    int date,month,year;
    Date d;
    cout<<"Enter the date"<<endl;
    cin>>date;

    cout<<"Enter the month"<<endl;
    cin>>month;

    cout<<"Enter the year"<<endl;
    cin>>year;

    d.setdate(date,month,year);
    d.getdate();
    return 0;
}