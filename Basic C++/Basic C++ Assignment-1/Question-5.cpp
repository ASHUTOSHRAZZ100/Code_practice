#include<iostream>
using namespace std;

int main(){
   float length,width,height,volume;
   cout<<"Enter the Length,Width and Height"<<endl;
   cin>>length>>width>>height;
    volume = length*width*height;
    cout<<"Volume of Cuboid is : "<<volume<<endl;
    return 0;
}