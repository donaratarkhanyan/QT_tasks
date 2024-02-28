#include <iostream> 
#include "task17.h" 
 
int main() { 
    try { 
        Circle circle(-6); 
        std::cout << "Circle Area: " << circle.calculate_area() << std::endl; 
    } catch (...) {
        std::cout << "Exception caught in cir!" << std::endl;
    } 
    try{
        Rectangle rectangle(8, 8); 
        std::cout << "Circle Area: " << rectangle.calculate_area() << std::endl;
    } catch (...) {
        std::cout << "Exception caught in rec!" << std::endl;
    }
    return 0;
}
