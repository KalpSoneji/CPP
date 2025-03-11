//display prime, count of non prime

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int i, a[5], count=0, npcount=0, j;

    cout << "Enter 5 values: ";
    
    for(i=0; i<5; i++)
        cin >> a[i];

    for(i=0; i<5; i++){
        count = 0;
        for(j=2; j<=sqrt(a[i]); j++){
            if(a[i] % j == 0)
                count++;
        }

        if(count == 1)
            npcount++;
        else
            cout << a[i] << " ";

    }

    cout << "Count of non-prime numbers: " << npcount;

}