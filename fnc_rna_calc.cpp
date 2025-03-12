#include <iostream>
using namespace std;

int add() { 
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    return a + b; 
}

int subtract() { 
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    return a - b; 
}

int multiply() { 
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    return a * b; 
}

int divide() { 
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    if (b == 0) {
        cout << "Error: Division by zero is not allowed" << endl;
        return 0;
    }
    return a / b; 
}

int main() {
    int choice;
    cout << "Calculator Menu: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Exit\n";
    
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << add() << endl;
            break;
        case 2:
            cout << "Result: " << subtract() << endl;
            break;
        case 3:
            cout << "Result: " << multiply() << endl;
            break;
        case 4:
            cout << "Result: " << divide() << endl;
            break;
        case 5:
            cout << "Exiting...";
            exit(0);
        default:
            cout << "Invalid choice" << endl;
    }
}