#include <iostream>
using namespace std;

class Employee
{

private:
    string name;
    int id;
    float salary;

public:
    Employee(string name, int id, float salary)
    {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }

    ~Employee()
    {
        cout << "Employee object destroyed" << endl;
    }
};

int main()
{

    Employee emp("Asif Hussain", 01, 50000);
    Employee emp1("Ali", 4, 45600);
    emp.displayDetails();

    return 0;
}