#include <iostream>
using namespace std;

class A{

private:
    int a;
protected:
    int b;
public:
    int c;
    void setvalue(int a){
        this->a = a;
    }
    int getvalue(){
        return a;
    }

};

class B : A{

private:
    int d;
protected:
    int e;
public:
    int f;  
    void calcsum(){
        setvalue(1);
        b = 2;
        c = 3;
        d = 4;
        e = 5;
        f = getvalue() + b + c + d + e;
        cout << "Sum: " << f;
    }

};

int main(){

    B obj;
    obj.calcsum();


}