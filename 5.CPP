#include <iostream>
#include <cmath> // for M_PI
using namespace std;

class AreaCalculator {
public:

    float area(float radius) {
        return M_PI * radius * radius;
    }


    int area(int side) {
        return side * side;
    }


    int area(int length, int width) {
        return length * width;
    }

 
    float area(float base, float height) {
        return 0.5f * base * height;
    }
};

int main() {
    AreaCalculator calc;

    float radius, base, height;
    int side, length, width;

    
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << calc.area(radius) << endl;

 
    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = " << calc.area(side) << endl;

    
    cout << "\nEnter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << calc.area(length, width) << endl;


    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << calc.area(base, height) << endl;

    return 0;
}
