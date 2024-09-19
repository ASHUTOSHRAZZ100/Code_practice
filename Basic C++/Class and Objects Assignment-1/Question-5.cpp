#include<iostream>
using namespace std;

class Circle{
    double radius,pi=3.1415926;

    public:
    void setRadius(double r);
    double getRadius();
    double areaCircle();
    double circumferenceCircle();
};

void Circle::setRadius(double r=0.0){
    radius = r;
}
double Circle::getRadius(){
    return radius;
}
double Circle::areaCircle(){
    return (pi*radius*radius);
}
double Circle::circumferenceCircle(){
    return (2*pi*radius);

}

int main(){
    double radius;
    cout<<"Enter the Radius"<<endl;
    cin>>radius;

    Circle c;
    c.setRadius(radius);
    double CircleRadius = c.getRadius();
    double CircleArea = c.areaCircle();
    double CircleCirumference = c.circumferenceCircle();

    cout<<"Radius = "<<CircleRadius<<endl;
    cout<<"Area = "<<CircleArea<<endl;
    cout<<"Circumference = "<<CircleCirumference<<endl;

    return 0;
}