#include <iostream>
using namespace std;

class Teacher {
public:
    string name;     // teacher ka naam
    string dept;     // department
    string subject;  // subject
    double salary;   // salary

    // department change karne ka function
    void changeDept(string newDept) {
        dept = newDept;
    }

    // teacher details print karne ka function
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
}; // <- class ke baad semicolon zaroori hai

int main() {
    Teacher t1; // Teacher object banaya

    // object ke fields set karna
    t1.name = "Jatin";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 25000;

    // details print karna
    t1.printInfo();

    // department change karna
    t1.changeDept("Information Technology");
    cout << "\nAfter department change:\n";
    t1.printInfo();

    return 0;
}
