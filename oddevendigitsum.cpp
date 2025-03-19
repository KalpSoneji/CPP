#include <iostream>
using namespace std;

int sumOddDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit % 2 != 0) 
            sum += digit;
        
        num /= 10;
    }
    return sum;
}

int sumEvenDigits(int num) {
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
    
        if (digit % 2 == 0) 
            sum += digit;
    
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int oddSum = sumOddDigits(num);
    int evenSum = sumEvenDigits(num);

    cout << "Sum of odd digits: " << oddSum << endl;
    cout << "Sum of even digits: " << evenSum << endl;

    return 0;
}