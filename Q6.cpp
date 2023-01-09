/*   Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operations of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using? ---> Multiple inheritance
    Q2. Which mode of Inheritance are you using? ---> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented? */

#include <cmath>
#include <iostream>
using namespace std;

class Digits
{
private:
    int num1, num2;

public:
    void SetNumberSimple()
    {
        cout << "Enter the first number :" << endl;
        cin >> num1;
        cout << "Enter the second number :" << endl;
        cin >> num2;
    }

    void PerformSimpleOperations()
    {
        cout << "The addition will be " << num1 + num2 << endl;
        cout << "The subtraction will be " << num1 - num2 << endl;
        cout << "The multiplication will be " << num1 * num2 << endl;
        cout << "The division will be " << num1 / num2 << endl;
    }
};

class ScientificCalculator
{

private:
    int num1, num2;

public:
    void SetNumberComplex()
    {
        cout << "Enter the first number :" << endl;
        cin >> num1;
        cout << "Enter the second number :" << endl;
        cin >> num2;
    }
    void PerformScCalculations()
    {
        cout << "The Sin value of the number will be :" << sin(num1) << endl;
        cout << "The Cos value of the number will be :" << cos(num1) << endl;
        cout << "The Tan value of the number will be :" << sin(num1) << endl;

        cout << "The Sin value of the number will be :" << sin(num2) << endl;
        cout << "The Cos value of the number will be :" << cos(num2) << endl;
        cout << "The Tan value of the number will be :" << sin(num2) << endl;
    }
};

class HybridCalculator : public Digits, public ScientificCalculator
{
};

int main()
{
    HybridCalculator c1;
    c1.SetNumberSimple();
    c1.PerformSimpleOperations();
    c1.PerformScCalculations();
    c1.SetNumberComplex();

    return 0;
}
