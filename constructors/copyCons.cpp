#include <iostream>
using namespace std;

// copy constructor is a defoult constructor that initializes an object using another object of the same class.
class teacher
{
private:
    double salary;
public:
    int age;
    string name;
    string dept;

    teacher(int age, string name, string dept, double salary)
    {
        this->age = age;
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }
    teacher(teacher &originalobj)
    {
        cout << "custom Copy constructor called" << endl;
        this->age = originalobj.age;
        this->name = originalobj.name;
        this->dept = originalobj.dept;
        this->salary = originalobj.salary;
    }
    void changedept(string newdept)
    {
        dept = newdept;
    }
    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{

    teacher t1(20, "Alice", "computer sciece", 20000.0); // Create an object of Student
    t1.getinfo();
    // Copy constructor is called here
    teacher t2(t1);
    t2.getinfo();
    return 0;
}