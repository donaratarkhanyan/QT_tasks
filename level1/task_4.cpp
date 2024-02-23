#include <iostream>

double sum (double num1, double num2)
{
    return num1 + num2;
}

double sub (double num1, double num2)
{
    return num1 - num2;
}

double mul (double num1, double num2)
{
    return num1 * num2;
}

double div (double num1, double num2)
{
    if(num2 != 0) 
    {
        return num1 / num2;
    }
    return 0.0;
}

int main() {
    double num1 = 0.0;
    double num2 = 0.0;
    char operation;

    std::cout<< "please enter the first number: " << std::endl;
	std::cin>> num1;
    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;
	std::cout<< "please enter the second number: " << std::endl;
    std::cin>> num2;

    switch(operation) { 
    case '+':
        std::cout << "Sum == " << sum(num1, num2) << std::endl;
        break;
    case '-':
        std::cout << "Sub == " << sub(num1, num2) << std::endl;
        break;
    case '*':
        std::cout << "Mul == " << mul(num1, num2) << std::endl;
        break;
    case '/':
        std::cout << "Div == " << div(num1, num2) << std::endl;
        break;
    }

    return 0;
}


