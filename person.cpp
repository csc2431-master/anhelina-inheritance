//
// Created by arias on 5/13/2024.
//

#include "person.h"

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Person::Person(const string &name, unsigned int age): _name(name), _age(age) {

}

string Person::ToString() const {
    stringstream ss;
    ss << _name << " " << _age;
    return ss.str();
}

bool Person::Equals(const Person &rhs) const {
    if (_name == rhs._name)
        return true;
    else
        return false;
}

void Person::Birthday() {
    _age++;
}

string Person::GetName() const {
    return _name;
}

unsigned int Person::GetAge() const {
    return _age;
}
