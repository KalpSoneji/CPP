//upper triangle

#include <iostream>
using namespace std;

int main(){

    int i=1, j, k;

    do{
        j = 6;
        do{
            cout << " ";
            j--;
        }while(j>i);

        k = 1;
        do{
            cout << "* ";
            k++;
        }while(k<=i);

        cout << endl;
        i++;
    }while(i<=5);

}