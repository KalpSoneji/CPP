#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int i=2, no, count=0;

    cout << "Enter a number: ";
    cin >> no;

    do{
        if(no % i == 0)
            count++;
        i++;
    }while(i<sqrt(no));

    if(count == 1)
        cout << "Not prime";
    else
        cout << "Prime";

}