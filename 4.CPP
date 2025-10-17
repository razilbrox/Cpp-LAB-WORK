#include <iostream>
using namespace std;


inline float areaCircle(float radius) {
    return 3.14159f * radius * radius;
}


inline float areaSquare(float side) {
    return side * side;
}


inline float areaRectangle(float length, float width) {
    return length * width;
}


inline float areaTriangle(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float radius, side, length, width, base, height;

   
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle = " << areaCircle(radius) << endl;


    cout << "\nEnter side of the square: ";
    cin >> side;
    cout << "Area of Square = " << areaSquare(side) << endl;

  
    cout << "\nEnter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of Rectangle = " << areaRectangle(length, width) << endl;

 
    cout << "\nEnter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << areaTriangle(base, height) << endl;

    return 0;
}
