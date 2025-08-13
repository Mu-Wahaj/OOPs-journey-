#include <iostream>
#include <string>
using namespace std;

class teacher
{

private:
    double salary;

public:
    // A constructor is a special member function that is automatically called when an object of the class is created
    // type of constructor:> non-parameterized constructor,perameterized constructor,copy.

    // it is used to initialize the object.
    // same as the class
    // does not have the return type .
    //  memory allocation happens when constructer is called.

    // non-parameterized constructor
    teacher()
    {
        dept = "computer science";
    }

    // parameterized constructor

    // two constructors with different parameters is called constructor overloading
    teacher(string n, int a, double s)
    {
        name = n;
        age = a;
        salary = s;
        dept = "computer science"; // default value
    }
    // properties
    string name;
    string dept;
    int age;

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