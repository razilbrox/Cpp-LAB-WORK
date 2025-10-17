#include <iostream>
using namespace std;


class BankAccount {
protected:
    int account_number;
    double balance;

public:
    BankAccount(int acc_no, double bal) : account_number(acc_no), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount : public BankAccount {
private:
    double rate_of_interest;

public:
    SavingsAccount(int acc_no, double bal, double roi)
        : BankAccount(acc_no, bal), rate_of_interest(roi) {}

    void calculateInterest() {
        double interest = balance * rate_of_interest / 100;
        cout << "Interest earned: " << interest << endl;
    }
};


class CurrentAccount : public BankAccount {
private:
    const double minimum_balance = 1000.0;
    const double service_charge = 50.0;

public:
    CurrentAccount(int acc_no, double bal)
        : BankAccount(acc_no, bal) {}

    void checkAndApplyServiceCharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout << "Service charge of " << service_charge << " applied due to low balance." << endl;
        } else {
            cout << "No service charge applied." << endl;
        }
    }
};

int main() {
    cout << "=== Savings Account ===" << endl;
    SavingsAccount sa(101, 5000.0, 5.0);
    sa.display();
    sa.deposit(1000);
    sa.withdraw(2000);
    sa.calculateInterest();
    sa.display();

    cout << "\n=== Current Account ===" << endl;
    CurrentAccount ca(202, 800.0);
    ca.display();
    ca.checkAndApplyServiceCharge();
    ca.display();

    return 0;
}
