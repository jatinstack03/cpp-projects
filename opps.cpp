#include<iostream>
using namespace std;

class teacher {
    private:
          double salary;
    public:
           string name;
           string dept; 
           string subject;

    void changeDept(string newDept){
        dept = newDept;

    }

    void setsalary(double s) {
        salary = s;
    }

    double getsalary() {
        return salary;

    }

};

int main() {

    teacher t1;
    t1.name = "jatin";
    t1.subject = "c++";
    t1.dept = "Computer science";   
    
    t1.setsalary(30000);

    cout << t1.name << endl;
    cout << t1.getsalary()<< endl;

    return 0;



}
