//
// Created by arias on 5/13/2024.
//

#ifndef ANHELINA_PERSON_H
#define ANHELINA_PERSON_H

#include <string>

using std::string;

class Person {
private:
    string _name;
    unsigned int _age;
public:
    Person(const string& name, unsigned int age);
    string ToString()const;
    bool Equals(const Person& rhs)const;
    void Birthday();
    string GetName()const;
    unsigned int GetAge()const;

};


#endif //ANHELINA_PERSON_H
