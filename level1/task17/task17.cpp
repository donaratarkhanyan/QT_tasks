#include <iostream>
#include <cmath>
#include <stdexcept>
#include "task17.h"

/*virtual double Shape::calculate_area() {
    if (!set) {
        throw std::runtime_error("Dimensions are not set");
    }
    return 0.0; 
}*/

void Circle::set_dimensions(double r) override {
    if (r <= 0) {
        throw std::invalid_argument("Radius must be a positive number");
    }
    radius = r;
    set = true;
}

double Circle::calculate_area() override {
    return set ? 3.14 * pow(radius, 2) : 0.0;
}

void Rectangle::set_dimensions(double w, double h) override {
    if (w <= 0 || h <= 0) {
        throw std::invalid_argument("Width and height must be positive numbers");
    }
    width = w;
    height = h;
    set = true;
}

double Rectangle::calculate_area() override {
    return set ? width * height : 0.0;
}
