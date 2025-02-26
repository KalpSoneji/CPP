#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int start, end, i, j, count=0, pcount=0;

    cout << "Enter starting and ending value: ";
    cin >> start >> end;

    i = start;

    for(i = start; i <= end; i++){
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                cout << i << " ";
            }
        }
    }

    for(i = start; i <= end; i++){
        for(j = 2; j <= sqrt(i); j++){
            
            count = 0;

            if(i % j == 0)
                count++;
        }

        if(count > 0){
            pcount++;
        }
    }

    cout << "Total prime count: " << pcount;

    

    

}
