#include <iostream>
using namespace std;

int main(){

    int a, b;
    //int c;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << "\nBefore swapping: a = " << a << " b = " << b << endl;

    // c = a;
    // a = b;
    // b = c;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "\nAfter swapping: a = " << a << " b = " << b << endl;

}