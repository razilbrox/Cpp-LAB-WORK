#include <iostream>
#include <string>
using namespace std;

class TelephoneBill {
private:
    string name;
    string address;
    string telephoneNumber;
    int numberOfCalls;

public:
    
    void inputDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Telephone Number: ";
        getline(cin, telephoneNumber);
        cout << "Enter Number of Calls Made: ";
        cin >> numberOfCalls;
        cin.ignore(); 
    }

   
    void displayDetails() const {
        cout << "\nCustomer Details:\n";
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Number of Calls: " << numberOfCalls << endl;
    }

 
    friend void calculateBill(const TelephoneBill&);
};


void calculateBill(const TelephoneBill& bill) {
    const int chargePerCall = 2;
    int totalAmount = bill.numberOfCalls * chargePerCall;
    cout << "Total Amount to be Paid: ₹" << totalAmount << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    TelephoneBill customer1, customer2, customer3;

    cout << "Enter details for Customer 1:\n";
    customer1.inputDetails();

    cout << "\nEnter details for Customer 2:\n";
    customer2.inputDetails();

    cout << "\nEnter details for Customer 3:\n";
    customer3.inputDetails();

 
    customer1.displayDetails();
    calculateBill(customer1);

    customer2.displayDetails();
    calculateBill(customer2);

    customer3.displayDetails();
    calculateBill(customer3);

    return 0;
}
