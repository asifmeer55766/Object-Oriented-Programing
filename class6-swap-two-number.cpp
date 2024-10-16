#include <iostream>

using namespace std;

int main()
{

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2; // For example numbers are 10 and 30

    cout << "Before swapping, the numbers are: " << num1 << " and " << num2 << endl;
    num1 = num1 + num2; // num1 = 10 + 30 => num1 = 40
    num2 = num1 - num2; // num2 = 40 - 30 => num2 = 10
    num1 = num1 - num2; // num1 = 40 - 10 => num1 = 30
    cout << "After swapping, the numbers are: " << num1 << " and " << num2 << endl;

    return 0;
}