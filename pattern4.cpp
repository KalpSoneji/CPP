//left upper triangle

 #include <iostream>
 using namespace std;

 int main(){

    int i=1, j, k;

    do{
        j=5;
        do{
            cout << "* ";
            j--;
        }while(j>=i);
        
        cout << endl;
        i++;
    }while(i<=5);

 }