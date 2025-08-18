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
    // parameterized constructor

    teacher(string name,int age,double salary)
    {
this->name= name;
        this->age = age;
        this->salary = salary;
        dept = "computer science"; // default value
    }


    // methods//member functions

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
    }
};
int main()
{
    teacher t1{"John Doe", 35, 50000.0};

    t1.getinfo();

    cout << "Teacher dept: " << t1.dept << endl; // by constructor

    return 0;
}