// program to Perform Calculation (+,-,*,/) using switch Statement
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Result: " << (a + b) << endl;
        break;
    case '-':
        cout << "Result: " << (a - b) << endl;
        break;
    case '*':
        cout << "Result: " << (a * b) << endl;
        break;
    case '/':
        cout << "Result: " << (a / b) << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
