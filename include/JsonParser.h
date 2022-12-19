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
#include <string>
/*
Note: usually when you need to group some data with some behavior you most likely need a class, but 
in this case we do not need to store any internal data such as number of times the function was called
so it's ok to also keep it as a simple function in a namespace (namespaces are just ways to group functions and variables under
a single name to make it simpler for the one who reads code)
This could also be a class JsonParser with a static function loadEmployees, the ideea is the same. The difference is that i would probably
use a static function if i needed 2-3 more functions in loadEmployees. If loadEmployees is short enough to be readable and also 
do it's job, then a namespace is sufficient
*/
namespace JsonParser{
    std::vector<Employee*> loadEmployees(const std::string employees_json_file);
}