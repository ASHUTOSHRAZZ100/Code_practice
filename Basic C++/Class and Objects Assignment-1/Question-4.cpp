#include<iostream>
#include<string>
using namespace std;

class Date{
    int date,month,year;
    string stringMonth;

    public:
    void diaplayMonthNUm();
    void diaplayMonthStr();
    void setdate(int d, int m, int y);
};

void Date::setdate(int d =1, int m=1, int y=2001){
    date = d;
    month = m;
    year = y;

    switch (month)
    {
    case 1:
        stringMonth = "jan";
        break;
    case 2:
        stringMonth = "Feb";
        break;
    case 3:
        stringMonth = "Mar";
        break;
    case 4:
        stringMonth = "Apr";
        break;
    case 5:
        stringMonth = "May";
        break;
    case 6:
        stringMonth = "June";
        break;
    case 7:
        stringMonth = "July";
        break;
    case 8:
        stringMonth = "Aug";
        break;
    case 9:
        stringMonth = "Sep";
        break;
    case 10:
        stringMonth = "Oct";
        break;
    case 11:
        stringMonth = "Nov";
        break;
    case 12:
        stringMonth = "Dec";
        break;
    
    default:
        stringMonth = "";
        break;
    }
}

void Date::diaplayMonthNUm(){
    cout<<"\n"<<date<<"-"<<month<<"-"<<year<<endl;
}
void Date::diaplayMonthStr(){
    cout<<"\n"<<date<<"-"<<stringMonth<<"-"<<year<<endl;
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
    d.diaplayMonthNUm();
    d.diaplayMonthStr();
    return 0;
}