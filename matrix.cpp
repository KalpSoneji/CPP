#include <iostream>
using namespace std;

int main(){

    int i, j, a[3][3];

    cout << "Enter 9 values: ";
    
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            cin >> a[i][j];

    cout << "Matrix: \n\n";

    for(i=0; i<3; i++){
        for(j=0; j<3; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }
        

}