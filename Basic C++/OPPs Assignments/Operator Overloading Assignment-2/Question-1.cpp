#include <iostream>
using namespace std;

class fraction
{
    long numerator, denominator;

public:
    fraction(long n = 0, long d = 1)
    {
        numerator = n;
        if(d!=0)
        denominator = d;
        else
        throw invalid_argument("Denominator cannot be zero.");
    }
    fraction operator+(fraction);
    void showData();
};

fraction fraction::operator+(fraction f)
{
    fraction temp;
    if (denominator == f.denominator)
    {
        temp.numerator = numerator + f.numerator;
        temp.denominator = denominator;
    }
    else{
        temp.numerator = (numerator*f.denominator) + (f.numerator*denominator);
        temp.denominator = denominator*f.denominator;
    }

    return temp;
}
void fraction::showData()
{
    cout << "\tNumerator = " << numerator << endl;
    cout << "\tDenominator = " << denominator << endl;
}

int main()
{

    fraction f1(1, 3), f2(3,5), f3;
    f1.showData();
    f2.showData();

    cout << "ADDITION " << endl;
    f3 = f1 + f2;
    f3.showData();
    return 0;
}