#include <iostream>
using namespace std;

class Cuboid
{
    float length, breadth, height;
    public:
    Cuboid(float len = 0, float bre = 0, float hei = 0)
    {
        length = len;
        breadth = bre;
        height = hei;
    }
    void display();
};

void Cuboid::display()
{
    cout << length << endl;
    cout << breadth << endl;
    cout << height << endl;
}

int main()
{
    float len,bre,hig;
    cout<<"Enter the length ";
    cin>>len;
    cout<<"Enter the breadth ";
    cin>>bre;
    cout<<"Enter the height ";
    cin>>hig;
    Cuboid c(len,bre,hig);
    c.display();

    return 0;
}