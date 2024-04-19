#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    void setData(int, int);
    void showData();
    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);
};

void Complex::setData(int x, int y)
{
    a = x;
    b = y;
}
void Complex::showData()
{
    cout << "Real = " << a << endl;
    cout << "Imaginary = " << b << endl;
}

Complex Complex::add(Complex C)
{

    Complex temp;
    temp.a = a + C.a;
    temp.b = b + C.b;
    return temp;
}

Complex Complex::subtract(Complex C)
{
    Complex temp;
    temp.a = a - C.a;
    temp.b = b - C.b;
    return temp;
}

Complex Complex::multiply(Complex C)
{
    Complex temp;
    temp.a = a * C.a;
    temp.b = b * C.b;
    return temp;
}
int main()
{
    Complex num1,num2,num3,num4;
    num1.setData(10,30);
    num2.setData(30,10);
    num3 = num1.add(num2);
    num4 = num3.multiply(num1);
    Complex num5;
    num5 = num4.subtract(num2);

    cout<<"num1 value is"<<endl;
    num1.showData();
    cout<<"num2 value is"<<endl;
    num2.showData();

    cout<<"Adding num1 + num2 is num3"<<endl;
    num3.showData();

    cout<<"Multiply num3 * num1 is num4"<<endl;
    num4.showData();

    cout<<"Subtract num4 - num2 is num5"<<endl;
    num5.showData();
    cout << endl;
    return 0;
}