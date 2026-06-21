#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int sum(int num1, int num2)
{
    return num1 + num2;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

float divide(int x, int y)
{
    return x / (float)y;
}
int greater(int x, int y)
{
    return x > y;
    cout << x << "is greater than " << y;
    return 0;
}
float average(int x, int y)
{
    return (float(x) + y) / 2;
}
float velocity(int x, int y)
{
    return float(x) / y;
}
int equal(int x, int y)
{

    if (x == y)
        cout << "numbers are equal";
    else
        cout << "numbers not equal";
    return 0;
}
int greatest(int x, int y)
{
    if (x > y)
        cout << x << " is greater";
    else
        cout << y << " is greater";
    return 0;
}
int lowest(int x, int y)
{
    if (x > y)
        cout << y << " is lowest";
    else
        cout << x << " is lowest";
    return 0;
}
double power(double num1, double num2)
{
     /*int power1;
     for (int i = 1;i <= num2;i++)
     {
         power1 = num1 ^ num2;
     }
     return power1;*/
    double result;
    result = pow(num1, num2);
    return result;
}
bool isPrime(int num1)
{
    if (num1 <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2;i <= num1 / 2;i++)
        {
            if (num1 % i == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
}


void menu()
{
    cout << " CALCULATOR" << endl;
    cout << "1. Add Numbers" << endl;
    cout << "2. Subtract Numbers" << endl;
    cout << "3. Multiply Numbers" << endl;
    cout << "4. Divide Numbers" << endl;
    cout << "5. Find greater Number" << endl;
    cout << "6. Find Lowest Number" << endl;
    cout << "7. Average of numbers" << endl;
    cout << "8. Are numbers equal?" << endl;
    cout << "9. Find Velocity" << endl;
    cout << "10. Find Power" << endl;
    cout << "11. Check Prime number" << endl;
    cout << "12. Exit" << endl;
}

int main()
{
    int choice;
    int num1, num2;

    do {
        menu();
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            cout << "Sum is : " << sum(num1, num2) << endl;

        }
        else if (choice == 2)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            int result = subtract(num1, num2);
            cout << "Answer : " << result << endl;
        }
        else if (choice == 3)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            int result = multiply(num1, num2);
            cout << "Answer : " << result << endl;
        }
        else if (choice == 4)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            float result = divide(num1, num2);
            cout << "Answer : " << result << endl;
        }
        else if (choice == 5)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            int result = greatest(num1, num2);
            cout << result;
        }
        else if (choice == 6)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            int result = lowest(num1, num2);
            cout << result;
        }
        else if (choice == 7)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            float result = average(num1, num2);
            cout << "average is " << result;
        }
        else if (choice == 8)
        {
            cout << "Enter the first number : ";
            cin >> num1;
            cout << "Enter the second number : ";
            cin >> num2;
            cout << endl;
            int result = equal(num1, num2);


        }
        else if (choice == 9)
        {
            cout << "Enter the distance(in meters) : ";
            cin >> num1;
            cout << "Enter the time(in sec) : ";
            cin >> num2;
            cout << endl;
            float result = velocity(num1, num2);
            cout << "velocity is " << result << " meter/sec.";
        }
        else if (choice == 10)
        {
            cout << "Enter number : ";
            cin >> num1;
            cout << "enter the power : ";
            cin >> num2;
            cout << endl;
            double result = power(num1, num2);
            cout << result;
        }
        else if (choice == 11)
        {
            cout << "Enter number to check whether it is prime or not: ";
            cin >> num1;
            cout << endl;
            if (isPrime(num1))
            {
                cout << "\nPrime number";
            }
            else
            {
                cout << "\nNot a prime number";
            }
        }
        else
        {
            if (choice != 12)
            {
                cout << "Invalid input" << endl;
            }
        }
        cout << endl;
    } while (choice != 12);
    return 0;
}