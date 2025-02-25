//krishnamurthy number -- sum of factorial of digits using do while loop

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int i, no, sum=0, rem, temp, digits=0, fact=1;

    cout << "Enter a number: ";
    cin >> no;

    temp = no;
    
    do{
        fact = 1;
        rem = no  % 10;
        do{
            fact *= rem;
            rem--;
        }while(rem>0);
        sum += fact;
        no = no / 10;
    }while(no != 0);

    if(temp == sum)
        cout << "Krishnamurthy";
    else
        cout << "Not Krishnamurthy";
}