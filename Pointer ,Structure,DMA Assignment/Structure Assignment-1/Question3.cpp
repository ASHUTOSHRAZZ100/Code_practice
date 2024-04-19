#include <iostream>
using namespace std;

void print(struct Employee);
struct Employee userInput();

struct Employee
{
    long id;
    char name[30];
    double salary;
};

int main()
{
    struct Employee e1 = userInput();
    print(e1);
     struct Employee e2 = userInput();
    print(e2);
    cout<<endl;
    return 0;
}

struct Employee userInput()
{
    struct Employee e;
    cout << "Enter the Employee id" << endl;
    cin >> e.id;
    cout << "Enter the name of Employee " << endl;
    fflush(stdin);
    fgets(e.name, 30, stdin);
    cout << "Enter the Employee salary " << endl;
    cin >> e.salary;

    return e;
}
void print(struct Employee e)
{
    cout<<endl<<endl;
    cout << "Employee id = " << e.id << endl;
    cout << "Employee name = " << e.name << endl;
    cout << "Employee salary = " << e.salary << endl;
}
