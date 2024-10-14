#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int roll_number;
    string name;
    int marks;

public:
     void setName(string n)
    {

        name = n;
    }
    void setRollNo(int r)
    {
        roll_number = r;
    }
    void setMarks(float m)
    {
        marks = m;
    }

    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student std;
    std.setName("Asif Hussain");
    std.setRollNo(12345);
    std.setMarks(85.5);

    std.getData();

    return 0;
}