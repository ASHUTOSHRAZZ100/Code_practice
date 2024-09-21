#include <iostream>
using namespace std;

class Complex
{

    int real, imaginary;

public:
    Complex(int real_num, int imaginary_num)
    {
        real = real_num;
        imaginary = imaginary_num;
    }
    void showData();
};

void Complex::showData()
{
    cout << "\tReal Number = " << real << endl;
    cout << "\tImaginary Number = " << imaginary << endl;
}

int main()
{

    Complex complexArray[5] = {Complex(11, 15), Complex(21, 25), Complex(41, 54), Complex(13, 35), Complex(18, 59)};

    // complexArray[0] = Complex(1,5);
    // complexArray[1] = Complex(2,6);
    // complexArray[2] = Complex(8,3);
    // complexArray[3] = Complex(10,54);
    // complexArray[4] = Complex(19,65);

    for (int i = 0; i < 5; i++)
    {
        cout<<"-------"<<endl<<endl;
        complexArray[i].showData();
    }

    return 0;
}