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
    bool operator<(fraction);
    void showData();
};

bool fraction::operator<(fraction f)
{

    if (denominator == f.denominator && numerator<f.numerator) return true;
    else
    {
        double f1 = (float)numerator/denominator;
        double f2 = (float)f.numerator/f.denominator;
        cout<<f1<<" "<<f2<<endl;
        if(f1<f2) return true;
    }

    return false;
}
void fraction::showData()
{
    cout << "\tNumerator = " << numerator << endl;
    cout << "\tDenominator = " << denominator << endl;
}

int main()
{

    fraction f1(4, 5), f2(6,8);
    f1.showData();
    f2.showData();

    bool ans = f2<f1;
    if(ans)
    cout << "Greater" <<endl;
    else
    cout<<"Lesser"<<endl;
    return 0;
}