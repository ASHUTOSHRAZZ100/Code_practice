#include<iostream>
using namespace std;

  template<typename x, typename y>
    x greater_value(x a, y b){
        if(a>b) return a;
        else return b;
    }
int main(){
    cout<< greater_value(10,20)<<endl;
    cout<< greater_value(10.30,10.45)<<endl;
    cout<< greater_value(40.30,20.90)<<endl;

    return 0;
}