#include <iostream>
using namespace std;

int main(){

    int num, temp, sum=0, rem;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    
    do{
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }while(temp != 0);

    cout << "Sum of digits of " << num << " is " << sum << endl;

}