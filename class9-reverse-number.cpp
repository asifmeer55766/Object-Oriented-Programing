#include <iostream>

using namespace std;
int main()
{

    int number;
    cout << "Enter the number" << endl;
    cin >> number;
    // Reverse the number
    int reverse = 0;
    while (number != 0)
    {

        // explination
        // let number = 123
        //  remainder   reverse    number
        //      3          3         12
        //      2          32        1
        //      1          321       0

        // Hense reverse = 321 Ans

        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    cout << "The reverse of the number is " << reverse << endl;

    return 0;
}