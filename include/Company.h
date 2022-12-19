/*
Note: the way the C++ compiler actually works is that on an #include "file.h" the content of the file.h is 
actually pasted in the file that calls the include
Because of this, if fileA.h includes: fileB.h, fileC.h and fileB.h includes: fileC.h this will result in fileC.h
being pasted twice in fileA.h. In order to avoid this, #pragma once tells the compiler to analyze the code
and only include everything once (otherwise it will complain of functions and class redefinitions)
Another way to do this can be found in Developer.h
*/
#pragma once
#include "Employee.h"
#include <vector>

class Company{
public:
    Company(std::vector<Employee*>& company_employees);
    void lunchTime();
private:
    std::vector<Employee*>& employees;
};