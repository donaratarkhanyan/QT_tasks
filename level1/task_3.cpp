#include <iostream>

//Control Structures
int main() {
    int number;
    char grade;

    std::cout << "Enter a number: ";
    std::cin >> number;


    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }


    switch(number)
    {
    case 90 ... 100:
        grade = 'A';
        break;
    case 80 ... 89:
        grade = 'B';            
        break;
    case 70 ... 79:            
        grade = 'C';
        break;        
    case 60 ... 69:
        grade = 'C';                    
        break;
    default:
        grade = 'F';            
        break;
    }

    std::cout << "Grade: " << grade << std::endl;


    std::cout << "Numbers from 1 to 10:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}

