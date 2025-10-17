#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
 
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called.\n";
    }

  
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called.\n";
    }

    
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    
    ~Rectangle() {
        cout << "Destructor called for Rectangle with Length = " << length << " and Width = " << width << endl;
    }
};

int main() {
   
    Rectangle rect1;

    
    Rectangle rect2(10, 5);

    cout << "\nRectangle 1 details:\n";
    rect1.display();

    cout << "\nRectangle 2 details:\n";
    rect2.display();

    return 0;
}
