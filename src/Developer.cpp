#include "../include/Developer.h"

#include <iostream>

/*
Note: String formatting in c++ is fucking ugly. C++20 came with some formatting library, but until then this is pretty much
the only way to write "Beautiful strings";
*/
void Developer::logHours(int number_of_hours)
{
    std::cout << "Developer logged " << number_of_hours << " hours"<<'\n';
}

void Developer::takeLunchBreak()
{
    std::cout << "Developer took lunch break"<<'\n';
}

void Developer::takeSickDay()
{
    std::cout << "Developer took sick day"<<'\n';
}

void Developer::finishTask(int task_id){
    std::cout <<"Developer finished task with id "<<task_id<<'\n';
}
