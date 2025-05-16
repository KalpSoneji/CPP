#include <iostream>
using namespace std;

class Calculator {

    public:
    int add(int no1, int no2){
        cout << "Addition of two numbers is: " << no1 + no2 << endl;
        // return no1 + no2;
    }

    void add(int no1, int no2, int no3){
        cout << "Addition of three numbers is: " << no1 + no2 + no3 << endl;
    }

    void add(int no1, int no2, int no3, int no4){
        cout << "Addition of four numbers is: " << no1 + no2 + no3 + no4 << endl;
    }

    // float add(float no1, float no2){
    //     // cout << "Addition of two decimal numbers is: " << no1 + no2 << endl;
    //     return no1 + no2;
    // }

};

int main(){
    
    Calculator calc;

    calc.add(1,2);
    // cout << "Integer sum: " << calc.add(10, 20) << endl;
    calc.add(1, 2, 3);
    calc.add(1, 2, 3, 4);
    // cout << "Float sum: " << calc.add(10.5f, 20.5f) << endl;

}