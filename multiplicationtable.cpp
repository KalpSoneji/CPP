#include <iostream>
using namespace std;

int main(){

    int i=1, no;

    cout << "Enter a number: ";
    cin >> no;

    // for(i=1; i<11; i++)
    //     cout << no << " * " << i << " = " << no * i << endl;
    
    do{
        cout << no << " * " << i << " = " << no * i << endl;
        i++;
    }while(i<11);

    // while(i<11){
    //     cout << no << " * " << i << " = " << no * i << endl;
    //     i++;
    // }

}