#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:

    void readDetails() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter car model: ";
        cin >> model;
        cout << "Enter car year: ";
        cin >> year;
    }

    void displayDetails() const {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "Enter details for Car 1:" << endl;
    car1.readDetails();

    cout << "\nEnter details for Car 2:" << endl;
    car2.readDetails();

    cout << "\nEnter details for Car 3:" << endl;
    car3.readDetails();

    cout << "\nCar Details:\n";
    car1.displayDetails();
    car2.displayDetails();
    car3.displayDetails();

    return 0;
}
