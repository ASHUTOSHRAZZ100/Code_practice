#include<iostream>
using namespace std;

float area(float);
float area(float,float);
float area(float,int);


int main(){
    float radius,length,height,base;
    int breath;
    cout<<"Give Radius"<<endl;
    cin>>radius;
    cout<<"Give Length and Breath"<<endl;
    cin>>length>>breath;
    cout<<"Give Base and Height"<<endl;
    cin>>base>>height;
    float area_circle = area(radius);
    float area_rectangle = area(length,breath);
    float area_triangle = area(base,height);
    cout<<"circle area is "<<area_circle<<endl;
    cout<<"Rectangle area is "<<area_rectangle<<endl;
    cout<<"Triangle area is "<<area_triangle<<endl;
    cout<<endl;
    return 0;
}

float area(float rad){
    float area = (3.141*rad*rad);
    return area;
}
float area(float base,float height){
    float area  = 0.5*base*height;
    return area;
}
float area(float leng,int bre){
    float area  = leng*bre;
    return area;
}
