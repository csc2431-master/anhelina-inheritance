//
// Created by arias on 5/13/2024.
//

#include "employee.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Employee::Employee(const string &name, unsigned int age) : Person(name, age) {
    _salary = 0;
}

Employee::Employee(const string &name, unsigned int age, const string &department, double salary): Person(name, age), _department(department), _salary(salary) {

}

string Employee::ToString() const {
    stringstream ss;
    ss << Person::ToString() << " " << _department << " " << _salary;
    return ss.str();
}

void Employee::GiveRaise(double percentage) {
    _salary *= (1 + percentage);
}

string Employee::GetDepartment() const {
    return _department;
}

void Employee::SetDepartment(const string &department) {
    _department = department;
}

double Employee::GetSalary() const {
    return _salary;
}
