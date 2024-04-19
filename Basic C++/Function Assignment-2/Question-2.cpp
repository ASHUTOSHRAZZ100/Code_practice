#include<iostream>
using namespace std;

int add(int ,int,int =0 );
int main(){
    int a,b,c;
    cout<<"Enter the Three values "<<endl;
    cin>>a>>b>>c;
    cout<<"By calling two parameter "<<add(a,b)<<endl;
    cout<<"By calling three parameter "<<add(a,b,c)<<endl;
    cout<<endl;

    return 0;
}

int add(int x,int y,int z){
    return x+y+z;

}