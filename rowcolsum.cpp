#include <iostream>
using namespace std;

int main(){

    int i, j, rowsum=0, colsum=0, a[3][3];

    cout << "Enter 9 values: ";

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            cin >> a[i][j];

    for(i=0; i<3; i++){
        rowsum=0;
        for(j=0; j<3; j++)
            rowsum += a[i][j];

        cout << "Rowsum: " << rowsum << endl;
    }

    cout << "\n";

    for(i=0; i<3; i++){
        colsum=0;
        for(j=0; j<3; j++)
            colsum += a[j][i];

        cout << "Colsum: " << colsum << endl;

    }
}