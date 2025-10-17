#include <iostream>
using namespace std;

class c_polygon {
protected:
    double width, height;

public:
    void set_values(double w, double h) {
        width = w;
        height = h;
    }

    virtual double area() const {
        return 0;
    }
};

class c_rectangle : public c_polygon {
public:
    double area() const override {
        return width * height;
    }
};

class c_triangle : public c_polygon {
public:
    double area() const override {
        return 0.5 * width * height;
    }
};

int main() {
    c_polygon* poly;

    c_rectangle rect;
    c_triangle tri;

    rect.set_values(10, 5);
    tri.set_values(10, 5);

    
    poly = &rect;
    cout << "Rectangle area: " << poly->area() << endl;

    poly = &tri;
    cout << "Triangle area: " << poly->area() << endl;

    return 0;
}
