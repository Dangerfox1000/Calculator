#include <iostream>

int main() {
    
    int calc;
    
    std::cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
    std::cin >> calc;

    if (calc == 1)
    {
        
    int a = 0;
    int b = 0;

    std::cout << "X";
    std::cin >> a;

    std::cout << "Y";
    std::cin >> b;

    std::cout << "Answer: " << a + b << std::endl;
    }
    if (calc == 2)

    {

    int a = 0;
    int b = 0;

    std::cout << "X";
    std::cin >> a;

    std::cout << "Y";
    std::cin >> b;

    std::cout << "Answer: " << a - b << std::endl;
    }

    if (calc == 3)
    {

    int a = 0;
    int b = 0;

    std::cout << "X";
    std::cin >> a;

    std::cout << "Y";
    std::cin >> b;
    
    std::cout << "Answer: " << a * b << std::endl;
    }

    if (calc == 4)
    {

    int a = 0;
    int b = 0;

    std::cout << "X";
    std::cin >> a;

    std::cout << "Y";
    std::cin >> b;

    std::cout << "Answer: " << a / b << std::endl;
    }
    return 0;
}