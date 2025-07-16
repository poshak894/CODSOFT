#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> a;

    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Result: ";
    switch (op) {
        case '+': cout << a + b << '\n'; break;
        case '-': cout << a - b << '\n'; break;
        case '*': cout << a * b << '\n'; break;
        case '/': 
            if (b != 0) {
                cout << a / b << '\n';
            } else {
                cout << "Error: Cannot divide by zero.\n";
            }
            break;
        default:
            cout << "Invalid operation.\n";
    }

    return 0;
}