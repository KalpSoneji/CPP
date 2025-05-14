#include <iostream>
using namespace std;

class A {
    public:
    void printA() {
        cout << "A\n";
    }
};

class B: virtual public A {
    public:
    void printB() {
        cout << "B\n";
    }
};

class C: public virtual A {
    public:
    void printC() {
        cout << "C\n";
    }
};

class D: public B, public C {
    public:
    void printD() {
        cout << "D\n";
    }
};

int main(){

    A a;
    B b;
    C c;
    D d;

    d.printA();
    d.printB();
    d.printC();
    d.printD();

}