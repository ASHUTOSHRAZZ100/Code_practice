#include <iostream>
using namespace std;

void sortSalary(struct Employee *, int);
struct Employee userInput();
void print(struct Employee *, int);

struct Employee
{
    long id;
    char name[30];
    double salary;
};

int main()
{
    int size;
    cout << "Enter the size " << endl;
    cin >> size;
    struct Employee e1[size];
    for (int i = 0; i < size; i++)
    {
        e1[i] = userInput();
    }
    sortSalary(e1, size);
    print(e1, size);
    cout << endl;
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
void sortSalary(struct Employee *e, int size)
{
    double salary = e[0].salary;
    cout << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if ((e + j)->salary > (e + j + 1)->salary)
            {
                struct Employee temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
}

void print(struct Employee *e, int size)
{
    cout << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Employee id = " << (e + i)->id << endl;
        cout << "Employee name = " << (e + i)->name << endl;
        cout << "Employee salary = " << (e + i)->salary << endl;
    }
}
