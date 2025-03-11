//display non-palindrome, count of palindrome

#include <iostream>
using namespace std;

int main(){

    int a[5], i, j, pcount=0, temp, rev=0, rem=0;

    cout << "Enter 5 values: ";
    
    for(i=0; i<5; i++)
        cin >> a[i];

        for(i=0; i<5; i++){
            temp = a[i];      
            rev = 0;
            rem = 0;     

            while(temp != 0){
                rem = temp % 10;
                rev = (rev * 10) + rem;
                temp /= 10;
            }
            
            if(a[i] == rev)
                pcount++;
            else
                cout << a[i] << " ";
        }   

        cout << "Count of palindrome numbers: " << pcount;

}