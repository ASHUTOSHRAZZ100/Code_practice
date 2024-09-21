#include<iostream>
#include<string>
using namespace std;

class Book{
    bool booked;
    string tittle;
    float price;
    
    public:
    Book(){}
    Book(bool booked_status,string book_tittle,float book_price){
        booked =booked_status;
        tittle = book_tittle;
        price = book_price;
    }

    void dispaly(){
        cout<<"\tBooked Tittle "<<tittle<<endl;
        cout<<"\tBooked price "<<price<<endl;
        cout<<"\tBooked status "<<booked<<endl;
    }
};

int main(){

    Book b1,b2(true,"C++",20.3),b3(false,"C",10.3);

    cout<<"--- Dispaly b1 -----"<<endl<<endl;
    b1.dispaly();
    cout<<"--- Dispaly b2 -----"<<endl<<endl;
    b2.dispaly();
    cout<<"--- Dispaly b3 -----"<<endl<<endl;
    b3.dispaly();
    return 0;
}