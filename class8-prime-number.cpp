#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is prime
    bool isPrime = true;
    if (number <= 1)
    {
        isPrime = false;
        cout << "Not a prime number";
    }
    else
    {
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                cout << "Not a prime number";
                break;
            }
        }
        if (isPrime)
        {
            cout << number << " is a prime number." << endl;
        }
    }

    return 0;
}