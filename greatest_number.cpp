#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    
    // Input three numbers from the user
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Using logical operators to find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        cout << num1 << " is the greatest number." << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << num2 << " is the greatest number." << endl;
    } else {
        cout << num3 << " is the greatest number." << endl;
    }

    return 0;
}