#include <iostream>
using namespace std;

class Calc2;

class Calc1{

    int num1;

public:
    
    void setdata(int num1){
        this->num1 = num1;
    }

    void dispdata(){
        cout << "Number 1: " << num1 << endl;
    }

    friend void swap(Calc1 &c1, Calc2 &c2);
};

class Calc2{

    int num2;

public:
    
    void setdata(int num2){
        this->num2 = num2;
    }

    void dispdata(){
        cout << "Number 2: " << num2 << endl;
    }

    friend void swap(Calc1 &c1, Calc2 &c2);
};

void swap(Calc1 &c1, Calc2 &c2){
    int temp = c1.num1;
    c1.num1 = c2.num2;
    c2.num2 = temp;
}

int main(){

    Calc1 c1;
    Calc2 c2;

    cout << "\nBefore swapping: \n";

    c1.setdata(10);
    c2.setdata(20);

    c1.dispdata();
    c2.dispdata();

    swap(c1, c2);

    cout << "\nAfter swapping: \n";

    c1.dispdata();
    c2.dispdata();

}