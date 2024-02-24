#include <iostream>

class Shape {
public:
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        double P = 3.14;
        return P * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) 
            : width(w)
            , height(h) 
    {}

    double area() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);

    std::cout << "Area of the circle: " << circle.area() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.area() << std::endl;

    return 0;
}
