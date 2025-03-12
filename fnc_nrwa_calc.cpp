#include <iostream>
using namespace std;

void add(int num1, int num2) {
    cout << "Sum: " << num1 + num2 << endl;
}

void subtract(int num1, int num2) {
    cout << "Difference: " << num1 - num2 << endl;
}

void multiply(int num1, int num2) {
    cout << "Product: " << num1 * num2 << endl;
}

void divide(int num1, int num2) {
    if (num2 != 0)
        cout << "Quotient: " << (float)num1 / num2 << endl;
    else
        cout << "Error: Division by zero is not allowed." << endl;
}

int main() {
    int choice, num1, num2;
    cout << "Calculator Menu: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Exit\n";
    cout << "Enter choice, 1st number and 2nd number: ";
    cin >> choice >> num1 >> num2;
    while(1){    
        switch (choice){
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
            cout << "Exiting calculator..." << endl;
            exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }
}