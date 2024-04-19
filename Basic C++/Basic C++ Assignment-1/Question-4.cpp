#include <iostream>
using namespace std;

int main()
{
    double radius, Area;
    cout << "Enter the Radius of the Circle" << endl;
    cin >> radius;

    Area = (22 / 7) * (radius * radius);
    cout << "Area of a circle is : " << Area << endl;
    return 0;
}