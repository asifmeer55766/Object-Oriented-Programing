#include <iostream>

using namespace std;

// class declaration
class Employee
{
    // attributes
    string name;
    int age;
    double salary;

    // methods
public:
    // constructor metods to add data
    // Employee(string n, int a, double s)
    // {
    //     name = n;
    //     age = a;
    //     salary = s;
    // }
    void setData()
    {

        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main()
{
    // object declaration
    // Employee emp("Asif Hussain", 10, 50000.0);
    Employee emp;
    // manually asign a values
    emp.setData();
    emp.displayInfo();
    return 0;
}