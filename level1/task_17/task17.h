#ifndef TASK17
#define TASK17

class Shape {
public:
    virtual double calculate_area() = 0;
};


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double);
    double calculate_area() override;

};

class Rectangle : public Shape {
public:
    Rectangle(double, double);
    double calculate_area() override;

private:
    double width;
    double height;
};
#endif // TASK17

