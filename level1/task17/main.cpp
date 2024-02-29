#include <iostream>
#include "task17.h"

int main() {
    try {
        Circle circle;
        circle.set_dimensions(7);
        std::cout << "Circle Area: " << circle.calculate_area() << std::endl;

        Rectangle rectangle;
        rectangle.set_dimensions(4, 3);
        std::cout << "Rectangle Area: " << rectangle.calculate_area() << std::endl;

        Circle invalid_circle;
        std::cout << "Invalid Circle Area: " << invalid_circle.calculate_area() << std::endl;

        Rectangle invalid_rectangle;
        invalid_rectangle.set_dimensions(-2, 7); 
        std::cout << "Invalid Rectangle Area: " << invalid_rectangle.calculate_area() << std::endl;
    } catch (const std::exception& exep) {
        std::cout << "Exception caught in main program: " << exep.what() << std::endl;
    }
    return 0;
}
