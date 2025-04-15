#include <iostream>
using namespace std;

class Calc1{

    int num1, num2, ans;

public:
    
    void setdata(int num1, int num2){
        this->num1 = num1;
        this->num2 = num2;
    }

    void dispdata(){
        cout << "Number 1: " << num1 << "\tNumber 2: " << num2 << endl;
    }

    void calcsum(){
        ans = num1 + num2;
    }

    friend void add(Calc1 &sum);
    friend void displayresult(Calc1 &result);

};

void add(Calc1 &addition){
    addition.calcsum();
}

void displayresult(Calc1 &result){
    cout << "\nSum of " << result.num1 << " and " << result.num2 << " is: " << result.ans << endl;
}

int main(){

    Calc1 obj1;

    obj1.setdata(10, 20);
    obj1.dispdata();

    add(obj1);
    displayresult(obj1);

}