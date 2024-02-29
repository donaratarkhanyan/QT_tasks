#ifndef TASK17
#define TASK17

class Shape {
protected:
    bool set = false;
public:
    virtual void set_dimensions() = 0;
    virtual double calculate_area();
};

class Circle : public Shape {
private:
    double radius = 0.0;
public:
    void set_dimensions(double r) override;
    double calculate_area() override;
};

class Rectangle : public Shape {
public:
    void set_dimensions(double w, double h) override;
    double calculate_area() override;
private:
    double width = 0.0, 
    double height = 0.0;
};

#endif // TASK17
