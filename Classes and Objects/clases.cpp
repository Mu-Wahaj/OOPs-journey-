#include <iostream>
#include <string>
using namespace std;

class teacher
{

private:
    double salary;

public:
    // properties
    string name;
    string dept;
    int age;

    // methods//member functions
    void changedept(string newdept)
    {
        dept = newdept;
    }
    void setsalary(double s)
    {
        salary = s;
    }
    double getsalary()
    {
        return salary;
    }
};
int main()
{
    teacher t1;

    t1.name = "John Doe";

    t1.dept = "Mathematics";
    t1.age = 35;

    t1.setsalary(50000.0);

    cout << "Teacher Name: " << t1.name << endl;
    cout << t1.getsalary() << endl;
    return 0;
}