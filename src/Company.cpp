#include "../include/Company.h"

/*
    Note: C++ is a bit weird in the following way:
    Lets say that we have the following function:
    void modify(int a){
        a = a+5;
    }
    This function actually does not do anything at all because c++ actually copies the values passed as parameters
    on the newly created stack so if we have something like:
    int a = 7;
    modify(a);
    //a is still 7
    Because a copy of a was moved on the newly created stack and the original value was untouched
    This is very important because copying an int is not an issue, but copying big classes over and over again will create performance and memory issues
    However, if we change the function to accept a REFERENCE (a memory address) to a function, then the reference will be copied,
    but we will have access to the original value in the function (since the reference is copied on the stack we can acces the original value)
    So if we wanted to modify something or AVOID MAKING A COPY we have to pass the value "by reference" instead of "by value":
    void modify(int& a) {
        a = a+5;
    }
    int a = 7;
    modify(a);
    //a is 12

    Nowadays we c++ devs have a strong will to write functions that modify stuff as little as possible
    so most of the time you will encounter the following way:
    void modify(const int&a){
        a = a+5; //error, cannot modify a const parameter
        std::cout<<a; //ok, does not modify value
    }
    In this way we give access to the original value and we avoid copying, but we also forbid modifying.
    For instance if i wanted to write a log function it would probably look like:
    void log(LogLevel level, const std::string& message){
        //log data
    }
    You can see that for level i did not pass const or &.
    This is because a reference (which again, it's just a memory address) has 8 bytes on x64 cpus.
    An enum is actually an integer in disguise, which is also 8 bytes, so if i do not intend to modify the data i do not need to
    avoid copying since one way or another 8 bytes will be copied into the stack and in these bytes we will have either a plain int (0,1,2) or a memory address.
    By passing a parameter "by value" we also avoid the const keyword since we do not need to apply const to an object that is copied:
    void modify(const int a){
        a =a a+5; // error cannot modify a const parameter
        std::cout<< a;
    }
    This does not make much sense because we already have a clone of a, nobody cares if the value will be modified so const is redundant

    TLDR: every function call actually copies the parameters to a new stack. Make sure to be aware of this and consider when
    you're writing a function wheter it is necessary to copy or modify your values. If not, "const value&" is pretty much the best choice.
*/
Company::Company(std::vector<Employee*>& company_employees)
    : employees{company_employees}
    {}

/*
The text above also applies to for loops:
By default, employee will be a copy of employees[0], employees[1] and so on.
Usually we want to pass the value by reference (auto& employee: employees) and make it const if possible (const auto& employee: employees)
However, in this case employees is a vector that contains Employee pointers, meaning that each employee is actually a pointer, not the whole data
This means that the copied value for each stack (for creates basically a stack for each iteration) will be a pointer (which is an int).
Passing the value by reference will change nothing in this case.
*/
void Company::lunchTime(){
    for(auto employee: employees){
        employee->takeLunchBreak();
    }
}