#include <iostream>
using namespace std;

int isPrime(int num) {
    int i = 2;

    do {
        if (num % i == 0) 
            return 0;
        i++;
    } while (i * i <= num);
    
    return 1;
}

int main() {
    int rows, num = 2, i=1, j;

    cout << "Enter the number of rows: ";
    cin >> rows;

    do {
        int spaces = rows - i;
        
        do {
            cout << " ";
            spaces--;
        } while (spaces > 0);

        j = 0;
        do {
            cout << num << " ";  
            num++;            

            while (!isPrime(num)) 
                num++; 
            
            j++;
        } while (j < i);

        cout << endl;
        i++;

    } while (i <= rows);

}