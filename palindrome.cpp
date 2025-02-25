#include <iostream>
using namespace std;

int main(){

    int i, no, rev=0, rem, temp;

    cout << "Enter a number: ";
    cin >> no;
    
    temp = no;
    
    do{
        rem = no % 10;
        rev = (rev * 10) + rem;
        no = no / 10;
    }while(no != 0);

    if(rev == temp)
        cout << "Palindrome";
    else    
        cout << "Not palindrome";

}