#include <iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if((a > b) && (a > c))
        cout << "A is greatest.";
    else if((b > a) && (b > c))
        cout << "B is greatest.";
    else if((c > a) && (c > b))
        cout << "C is greatest.";

    else if((a == b) && (a > c))
        cout << "Both A and B are greatest.";    
    else if((c == b) && (b > a))
        cout << "Both B and C are greatest.";
    else if((a == c) && (a > b))
        cout << "Both A and C are greatest."; 

    else if(a == b && b == c)
        cout << "All numbers are equal.";
}   