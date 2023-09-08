#include <iostream>
#include <cmath> // for absolute function
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter an operation (+, -, *, /, abs): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Division by zero is not allowed." << endl;
            }
            break;
        case 'abs':
            cout << "Absolute value of " << num1 << ": " << abs(num1) << endl;
            cout << "Absolute value of " << num2 << ": " << abs(num2) << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
