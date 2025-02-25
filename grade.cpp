#include <iostream>
using namespace std;

int main(){

    int a, b, c, avg;

    cout << "Enter marks of 3 subjects: ";
    cin >> a >> b >> c;

    avg = (a + b + c) / 3;

    if(avg >= 90)
        cout << "A+";
    else if(avg >= 80)
        cout << "A";
    else if(avg >= 70)
        cout << "B+";
    else if(avg >= 60)
        cout << "B";
    else
        cout << "Fail";

}