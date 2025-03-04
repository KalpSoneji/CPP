#include <iostream>
#include <math.h>
using namespace std;

int Prime(int num) {

    int i = 2;

    do {
        if (num % i == 0) 
            return 0;
        i++;
    } while (i <= sqrt(num));

    return 1;
}

void primeTriangle(int rows) {

    int i=1, j, k, num = 2;

    do {
        j = 1;
        do {
            cout << " ";
            j++;
        } while (j <= rows - i);

        k = 1;
        do {
            cout << num << " ";
            num++;

            while (!Prime(num)) 
                num++;
                
            k++;
        } while (k <= i);

        cout << endl;
        i++;

    } while (i <= rows);
}

int main() {

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    primeTriangle(rows);

}