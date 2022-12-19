// Old way of protecting from header file duplication called Define guards
// this way if the string is not existing yet (it can be every string but we usually choose the filename)
// it will try to store a "Variable" with the string's name. If the "Variable" is already existing then this code will be ignored
// This way ensures that the "Variable" is only created once and the code is only pasted once
#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer: public Employee {
public:
    void logHours(int number_of_hours) override;
    void takeLunchBreak() override;
    void takeSickDay() override;
    
    void finishTask(int task_id);
};

#endif