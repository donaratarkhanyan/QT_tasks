#include <iostream>
#include <cmath>

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
        return P * pow(radius, 2);
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

void print(Shape* ob)
{
    std::cout << "Area: " << ob->area() << std::endl;
}

int main() {
    Circle ob(5);
    print(&ob);
    Rectangle obj(4, 5);
    print(&obj);

    return 0;
}
