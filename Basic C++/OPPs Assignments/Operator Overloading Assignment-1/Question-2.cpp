#include <iostream>
#include <string>
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
    string operator>(Time t);
};
string Time::operator>(Time t)
{
    if (hour == t.hour)
    {
        if (minute == t.minute)
        {
            if (second == t.second)
                return "Equal";

            else if (second > t.second)
                return "True";
            else
                return "False";
        }
        else if (minute > t.minute)
            return "True";
        else
            return "False";
    }
    else if (hour > t.hour)
        return "True";
    else
        return "False";
}

int main()
{
    Time t1(2, 5, 30), t2(2, 3, 31);
    string str = t1 > t2;
    cout << "T1 > T2 " << str << endl;
    return 0;
}