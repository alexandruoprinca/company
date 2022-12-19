/*
    Note: usually in a .cpp file the first think you include is the .cpp-s corresponding .h file
    After that you put a new line and you start including files from the project
    After that you put a new line and you start including files from other libraries
    After that you put a new line and you start including files from the standard library (such as iostream)
*/
#include "../include/Accountant.h"

#include <iostream>

void Accountant::logHours(int number_of_hours)
{
    std::cout << "Accountant logged " << number_of_hours << " hours"<<'\n';
}

void Accountant::takeLunchBreak()
{
    std::cout << "Accountant took lunch break"<<'\n';
}

void Accountant::takeSickDay()
{
    std::cout << "Accountant took sick day"<<'\n';
}

void Accountant::paySalaries()
{
    std::cout << "Accountant paid salaries"<<'\n';
}
