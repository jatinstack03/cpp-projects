#include<iostream>
#include<string>
using namespace std;

class Teacher {
    
    private:

    double salary;

    public:

    string name;
    string course;
    string dept;
    string subject;

    void changeDept(string newDept) { 
        
        dept = newDept;

    }

    void setsalary(double s ) {

        salary = s;


    }

    double getsalary() {
        return salary;
    }


};

int main() {

    Teacher t1;
    t1.name = "jatin";
    t1.course = "bsc it";
    t1.subject = "computer information";
    
    t1.setsalary(30000);

    cout << t1.getsalary() << endl;

    return 0;

}
