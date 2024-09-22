#include <iostream>
using namespace std;

class Complex
{
    float real, imaginary;

public:
    Complex() {}
    Complex(float real_num, float imaginary_num)
    {
        real = real_num;
        imaginary = imaginary_num;
    }
    Complex operator+(Complex c);
    Complex operator-(Complex c);
    Complex operator*(Complex c);
    bool operator==(Complex c);
    void showData();
};

Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}
Complex Complex::operator-(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
}
Complex Complex::operator*(Complex c)
{
    Complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
}
bool Complex::operator==(Complex c)
{
    if (real == c.real && imaginary == c.imaginary)
        return true;
    else
        return false;
}

void Complex::showData()
{
    cout << "\tReal Number = " << real << endl;
    cout << "\tImaginary Number = " << imaginary << endl;
}

int main()
{
    Complex c1(12, 5), c2(2, 5), c3;
    cout << "--- Addition -------" << endl;
    c3 = c1 + c2;
    c3.showData();
    cout << "--- Subtraction -------" << endl;
    c3 = c1 - c2;
    c3.showData();
    cout << "--- Multiplication -------" << endl;
    c3 = c1 * c2;
    c3.showData();
    cout << "--- Equal to -------" << endl;
    bool check = c1 == c2;
    cout<<"\tC1 == c2 is "<<check<<endl;
    return 0;
}