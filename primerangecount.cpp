#include <iostream>
using namespace std;

int main(){

    int i, j, start, end, count=0, primecount=0;

    cout << "Enter starting and ending range: ";
    cin >> start >> end;

    for(i=start; i<=end; i++){
        count = 0;
        for(j=1; j<=i; j++){
            if(i % j == 0)
                count++;
        }

        if(count == 2){
            cout << i << " ";
            primecount++;
        }

    }

    cout << endl << primecount;

}