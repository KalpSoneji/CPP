#include <iostream>
using namespace std;

void add() {
    int a, b;
    cout << "Enter first number and second number: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

void subtract() {
    int a, b;
    cout << "Enter first number and second number: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

void multiply() {
    int a, b;
    cout << "Enter first number and second number: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

void divide() {
    int a, b;
    cout << "Enter first number and second number: ";
    cin >> a >> b;
    if (b != 0) {
        cout << "Result: " << (float)a / b << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main() {
    int choice;
    while(1){
        cout << "Calculator Menu: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}