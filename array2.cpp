#include <iostream>
using namespace std;

int main(){

    int i, n, odd=0, even=0;
    
    cout << "Enter the size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter " << n << " elements: ";
    
    for(i=0; i<5; i++)
        cin >> a[i];

    cout << "Odd numbers: ";

    for(i=0; i<n; i++)
        if(a[i] % 2 == 1){
            cout << a[i] << "\t";
            odd++;
        }

    cout << "Even numbers: ";

    for(i=0; i<n; i++)
        if(a[i] % 2 == 0){
            cout << a[i] << "\t";
            even++;
        }

    cout << "\nCount of odd numbers: " << odd << endl;
    cout << "Count of even numbers: " << even;
            
}