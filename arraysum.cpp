#include <iostream>
using namespace std;

int main(){

    int a[5], i, sum=0;

    for(i=0; i< 5; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
        sum += a[i];
    }

    cout << endl;
    
    cout << "Sum: " << sum;

}