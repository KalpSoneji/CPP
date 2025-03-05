#include <iostream>
using namespace std;

int main(){

    int a[5], i;

    for(i=0; i< 5; i++){
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl;
    
    for(i=0; i<5; i++)
        cout << "a[" << i << "] = " << a[i] << "\t";

}