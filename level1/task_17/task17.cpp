#include <iostream> 
#include <cmath> 
#include <stdexcept> 
#include "task17.h" 
 
 
Circle::Circle(double r)
    :radius {r}
{ 
    if (radius <= 0) {   
        throw std::invalid_argument("Radius must be a positive number"); 
    } 
} 
 
double Circle::calculate_area() { 
    return 3.14 * pow(radius, 2); 
} 
 
Rectangle::Rectangle(double w, double h)
    :width {w}
    ,height {h}
{ 
    if (width <= 0 || height <= 0) { 
        throw std::invalid_argument("Width and height must be positive numbers"); 
    } 
} 
 
double Rectangle::calculate_area() { 
    return width * height; 
}
