#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int hr, int min, int sec)
    {
        hour = hr;
        minute = min;
        second = sec;
    }
    Time operator+(Time t);
    void showData();
};
void Time::showData()
{
    cout << hour << " : " << minute << " : " << second << endl;
}

Time Time::operator+(Time t)
{
    Time temp;
    temp.hour = hour + t.hour;
    temp.minute = minute + t.minute;
    temp.second = second + t.second;
    return temp;
}

int main()
{
    Time t1(2, 30, 5), t2(4, 9, 10), t3;
    t3 = t1 + t2;
    t3.showData();
    return 0;
}