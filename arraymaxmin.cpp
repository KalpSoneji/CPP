#include <iostream>
using namespace std;

int main(){

    int a[5], i, min, max;

    for(i=0; i< 5; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }
    
    min = a[0];
    max = a[0];

    for(i=0; i<5; i++){
        if(a[i] < min)
            min = a[i];
        else if(a[i] > max)
            max = a[i];
    }

    cout << "\nMin: " << min << endl;
    cout << "Max: " << max;

}