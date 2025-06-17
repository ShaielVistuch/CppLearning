// CppLearning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float number = 0;
    std::cout << "Enter a natural number\n";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "Number entered is not a natural number! Exiting...\n";
        return 1;
    }
    else
    {
        std::cout << "The square root of " << number << " is " << std::sqrt(number);
        return 0;
    }

}
