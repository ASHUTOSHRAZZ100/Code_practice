#include <iostream>
using namespace std;

double highestSalary(struct Employee[]);
struct Employee userInput();

struct Employee
{
    long id;
    char name[30];
    double salary;
};

int main()
{
    struct Employee e1[5];
    for (int i = 0; i < 5; i++)
    {
        e1[i] = userInput();
    }
    double salary = highestSalary(e1);
    cout << "Hightest salary is " << salary << endl;
    cout << endl;
    return 0;
}

struct Employee userInput()
{
    struct Employee e;
    // cout << "Enter the Employee id" << endl;
    // cin >> e.id;
    // cout << "Enter the name of Employee " << endl;
    // fflush(stdin);
    // fgets(e.name, 30, stdin);
    cout << "Enter the Employee salary " << endl;
    cin >> e.salary;

    return e;
}
double highestSalary(struct Employee e[])
{
    double salary = e[0].salary;
    cout << endl
         << endl;
    for (int i = 1; i < 5; i++)
    {
        if (salary <= e[i].salary)
        {
            salary = e[i].salary;
        }
    }
    return salary;
}
