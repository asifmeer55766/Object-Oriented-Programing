#include <iostream>
using namespace std;

int main()
{

    // declaring varibles
    int a = 10;
    int b = 20;
    int c = 30;

    // find the greater from these
    if (a > b && a > c)
    {
        cout << "The greatest number is: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The greatest number is: " << b << endl;
    }

    else
    {
        cout << "The greatest number is: " << c << endl;
    }

    return 0;
}