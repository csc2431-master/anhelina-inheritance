//
// Created by arias on 5/13/2024.
//

#ifndef ANHELINA_EMPLOYEE_H
#define ANHELINA_EMPLOYEE_H

#include "person.h"

class Employee : public Person {
private:
    string _department;
    double _salary;
public:
    Employee(const string& name, unsigned int age);
    Employee(const string& name, unsigned int age, const string& department, double salary);
    string ToString()const;
    void GiveRaise(double percentage);
    string GetDepartment()const;
    void SetDepartment(const string& department);
    double GetSalary()const;
};


#endif //ANHELINA_EMPLOYEE_H
