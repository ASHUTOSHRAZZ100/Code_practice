#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setVales(int real, int imaginary);
    void display();
};

void Complex::setVales(int numA, int numB)
{
    real = numA;
    imaginary = numB;
}

void Complex::display()
{
    cout << "Real = " << real << "\n"
         << "Imaginary = " << imaginary << endl;
}

int main()
{
    int realNumber,imaginaryNumber;
    cout<<"Enter the Real number"<<endl;
    cin>>realNumber;
    cout<<"Enter the Imaginary number"<<endl;
    cin>>imaginaryNumber;
    Complex obj1;
    obj1.setVales(realNumber,imaginaryNumber);
    obj1.display();
    return 0;
}