// Wap for bankaccount system using operatorOverloading
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b = 0) {
        balance = b;
    }

    // Deposit / Merge accounts
    BankAccount operator + (const BankAccount &acc) {
        return BankAccount(balance + acc.balance);
    }

    // Withdraw
    BankAccount operator - (double amount) {
        return BankAccount(balance - amount);
    }

    // Compare
    bool operator > (const BankAccount &acc) {
        return balance > acc.balance;
    }

    bool operator == (const BankAccount &acc) {
        return balance == acc.balance;
    }

    // Interest (function call operator)
    void operator()(double rate) {
        balance += balance * rate / 100;
    }

    // Prefix ++ (bonus)
    BankAccount operator++() {
        balance += 500;
        return *this;
    }

    // Output
    friend ostream& operator<<(ostream &out, const BankAccount &acc) {
        out << "Balance: ₹" << acc.balance;
        return out;
    }
};

int main() {
    BankAccount a1(5000), a2(3000);

    BankAccount a3 = a1 + a2;   // merge
    a3 = a3 - 2000;             // withdraw

    ++a1;                       // bonus

    a1(10);                     // interest

    if(a1 > a2)
        cout << "a1 has more balance\n";

    cout << a1 << endl;
    cout << a3 << endl;

    return 0;
}