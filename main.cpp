#include "person.h"
#include "employee.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {
    Person a("Anhelina", 18);
    Person b("Tatiana", 19);
    Person c("Tatiana", 22);
    cout << a.ToString() << endl;
    cout << b.ToString() << endl;
    cout << c.ToString() << endl;
    cout << a.Equals(b) << endl;
    cout << a.Equals(c) << endl;
    a.Birthday();
    cout << a.ToString() << endl;

    Employee d("Jeff", 22);
    Employee e("Mike", 23, "CIS", 65000);
    cout << d.ToString() << endl;
    cout << e.ToString() << endl;
    e.GiveRaise(0.5);
    cout << e.ToString() << endl;

    return 0;
}
