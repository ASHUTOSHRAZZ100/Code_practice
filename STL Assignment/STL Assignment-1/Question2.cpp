#include<iostream>
using namespace std;

template<typename X, typename Y>
X smaller_val(X a, Y b){
    if(a<b) return a;
    else return b;
}

int main(){

    cout<< smaller_val(10,20)<<endl;
    cout<< smaller_val(10.20,20.30)<<endl;
    cout<< smaller_val(10.36,10.25)<<endl;

    return 0;
}