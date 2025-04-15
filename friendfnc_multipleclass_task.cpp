#include <iostream>
using namespace std;

class currentAccount;
class savingsAccount{

    float balance;

public:
    
    void setdata(float balance){
        this->balance = balance;
    }

    void dispBalance(){
        cout<<"Balance in Savings Account is: " << balance << endl;
    }

    friend void transferAmount(savingsAccount &sA, currentAccount &cA);
};

class currentAccount{

    float balance;

public:
    
    void setdata(float balance){
        this->balance = balance;
    }

    void dispBalance(){
        cout<<"Balance in Savings Account is: " << balance << endl;
    }

    friend void transferAmount(savingsAccount &sA, currentAccount &cA);
};

void transferAmount(savingsAccount &sA, currentAccount &cA){

    int withdrawAmount;
    
    cout << "Enter the amount you wanna transfer: ";
    cin >> withdrawAmount;

    if((sA.balance - withdrawAmount) > 2000){

        sA.balance -= withdrawAmount;
        cA.balance += withdrawAmount;
    }

    else
        cout << "\nInsufficient balance in Savings Account\n\n";

}

int main(){

    savingsAccount sA;
    currentAccount cA;

    sA.setdata(5000);
    cA.setdata(10000);

    cout << "Before transfer: ";
    
    sA.dispBalance();
    cA.dispBalance();

    transferAmount(sA, cA);

    cout << "After transfer: ";

    sA.dispBalance();
    cA.dispBalance();

}