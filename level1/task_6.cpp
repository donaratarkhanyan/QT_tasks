#include <iostream>

int main() {
    int number = 10;
    int* ptr = &number;
    int& ref = number;

    std::cout << "Original number: " << number << std::endl;
    std::cout << "Using pointer: " << *ptr << std::endl;
    std::cout << "Using reference: " << ref << std::endl;

    *ptr = 20;
    ref = 30;

    std::cout << "After change" << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;

    return 0;
}

