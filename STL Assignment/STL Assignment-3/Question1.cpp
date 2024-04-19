#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 5> arr1 = {10, 20, 30, 40, 50};

    cout<<"Print array elements form right to left :- "<<endl;
    array<int ,5>::reverse_iterator it;
    for(it = arr1.rbegin();it!=arr1.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}