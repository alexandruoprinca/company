#include "../include/JsonParser.h"

#include "../include/Accountant.h"
#include "../include/Manager.h"
#include "../include/Developer.h"

/*
Note: Read text from company.cpp and then come back
Now that you're back, you can see that here in loadEmployees i passed a const std::string employees_json_file.
This value is const and it is passed by value, so it doesnt make sense to have it const AND it will be copied (double bad)
Please think of the correct way to avoid copying and also keep it unmodifiable
*/
namespace JsonParser{
    std::vector<Employee*> loadEmployees(const std::string employees_json_file){
        //return {};
        return std::vector<Employee*>{{new Manager{}, new Developer{}, new Accountant{}, new Developer{}, new Developer{}}};
    }
}