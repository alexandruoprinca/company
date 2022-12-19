#include "../include/Manager.h"

#include <iostream>

/*
    Note: usually every project will have a set of "Guidelines" that will tell you
    how a function should look like, how a variable should look like and so on
    It is very important to be consistent with the way you write code. You can see here that i chose to write functions
    as firstwordSecondwordThirdword and variables as firstword_secondword_thirdword.
    I also like to keep global values as FIRSTWORD_SECONDWORD_THIRDWORD and class members as _firstword_secondword_thirdword.
    You don't have to do it like me, but you have to be consistent.

*/
void Manager::logHours(int number_of_hours)
{
    std::cout << "Manager logged " << number_of_hours << " hours"<<'\n';
}

void Manager::takeLunchBreak()
{
    std::cout << "Manager took lunch break"<<'\n';
}

void Manager::takeSickDay()
{
    std::cout << "Manager took sick day"<<'\n';
}

bool Manager::approveHoliday(){
    std::cout <<"Manager approved holiday"<<'\n';
    return true;
}
