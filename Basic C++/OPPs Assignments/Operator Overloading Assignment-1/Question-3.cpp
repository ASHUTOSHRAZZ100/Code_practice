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
    Time operator++();
};
Time Time::operator++()//pre increment
{
    second++;
    minute = second / 60;
    second = second % 60;
    hour = hour + minute / 60;
    minute = minute % 60;
    return *this;
}
Time Time::operator++(int)//post increment
{
    Time temp = *this;
    second++;
    minute = second / 60;
    second = second % 60;
    hour = hour + minute / 60;
    minute = minute % 60;
    return temp;
}

int main()
{
    Time t1(2, 30, 5), t2(4, 9, 10);
    t1++;
    ++t2;
    return 0;
}