#include "include/JsonParser.h"
#include "include/Company.h"

#include <iostream>

int main() {
    //const tells the reader that this value will be the same until it is deleted
    const std::string employees_json_file{"config.json"};
    //auto is basically a way to "soften" the type system, but if you move the mouse over you will see that the compiler
    //actually need to know what type it is, it's just that the reader doesn't have to know, so it's kind of a middle way
    auto employees = JsonParser::loadEmployees(employees_json_file);
    std::cout<<"Employees count is "<<employees.size()<< '\n';
    //read what i wrote about company
    Company company{employees};
    company.lunchTime();
}