#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Calculate factorial\n";
    cout << "2. Simple calculator\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        unsigned long long fact = factorial(num);
        if (fact == 0 && num < 0)
            cout << "Factorial is not defined for negative numbers\n";
        else
            cout << "Factorial of " << num << " = " << fact << "\n";
    }
    else if (choice == 2) {
        double a, b;
        char op;
        cout << "Enter expression (e.g. 3 + 4): ";
        cin >> a >> op >> b;

        switch (op) {
        case '+': cout << "Result: " << a + b << "\n"; break;
        case '-': cout << "Result: " << a - b << "\n"; break;
        case '*': cout << "Result: " << a * b << "\n"; break;
        case '/':
            if (b == 0)
                cout << "Error: division by zero!\n";
            else
                cout << "Result: " << a / b << "\n";
            break;
        default:
            cout << "Unknown operation\n";
        }
    }
    else {
        cout << "Invalid choice\n";
    }

    return 0;
}
// Edited by Ruslan, Softskills Lab//