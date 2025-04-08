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

    void dispsum(){
        cout << "Result: " << ans << endl;
    }

    friend void add(Calc1 &sum);

};

void add(Calc1 &addition){

    addition.calcsum();
    // cout << "\nSum of " << addition.num1 << " and " << addition.num2 << " is: " << addition.ans << endl;

}

int main(){

    Calc1 obj1;

    obj1.setdata(10, 20);
    obj1.dispdata();

    add(obj1);
    obj1.dispsum();

    return 0;
}