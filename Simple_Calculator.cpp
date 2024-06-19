#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;
    bool exit = false;

    while (!exit) {
        // Display available operations
        cout << "Enter an operation (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') {
            exit = true;
            break;
        }

        // Input the numbers
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Perform the chosen operation
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
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Error: Invalid operation." << endl;
                break;
        }
    }

    cout << "Calculator program terminated." << endl;

    return 0;
}
