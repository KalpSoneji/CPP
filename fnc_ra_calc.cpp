#include <iostream>
using namespace std;

int add(int a, int b) { 
    return a + b; 
}

int subtract(int a, int b) { 
    return a - b; 
}

int multiply(int a, int b) { 
    return a * b; 
}

int divide(int a, int b) { 
    if (b == 0) {
        cout << "Error: Division by zero is not allowed" << endl;
        return 0;
    }
    return a / b; 
}

int main() {
    int choice, a, b;

    cout << "Calculator Menu: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Exit\n";
    cout << "Choose an operation: " << endl;
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (choice) {
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Result: " << divide(a, b) << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
}