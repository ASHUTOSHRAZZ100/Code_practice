#include <iostream>
#include <string>
using namespace std;

class Customer
{
    long cust_id,mobile;
    string name, email;

public:
    Customer() {}
    Customer(long cust_ids, long mobile_num, string cust_name, string cust_email)
    {
        cust_id = cust_ids;
        mobile = mobile_num;
        name = cust_name;
        email = cust_email;
    }

    void display()
    {
        cout << "Customer Id " << cust_id << endl;
        cout << "Customer Name " << name << endl;
        cout << "Customer Phone Number " << mobile << endl;
        cout << "Customer Email " << email << endl;
    }
};

int main()
{
    int a=12;
    Customer c1, c2(211003003090,8271943142, "Ashutosh Raj","ashutoshrazz100@gmail.com");
    cout<<"-------- Dsplay c1 --------"<<endl;
    c1.display();
    cout<<"-------- Dsplay c2 ---------"<<endl;
    c2.display();

    return 0;
}