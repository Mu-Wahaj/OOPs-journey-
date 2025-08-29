#include <iostream>
using namespace std;

int main()
{
    // hierarchical inheritance is a type of inheritance where multiple classes (derived classes) inherit from a single class (base class).

    class human
    {
    public:
        string name;
        int age;
    };

    class teacher : public human
    {
    protected:
        double slary;

    public:
        string subject;
    };
    class student : public human
    {
    public:
        int rollNo;
    };
    teacher tObj;
    tObj.name = "Mr. Smith";
    tObj.age = 45;
    tObj.subject = "Physics";
    cout << "Teacher Name: " << tObj.name << endl;
    cout << "Teacher Age: " << tObj.age << endl;
    cout << "Subject: " << tObj.subject << endl;
    student sObj;
    sObj.name = "Bob";
    sObj.age = 20;
    sObj.rollNo = 303;
    cout << "Student Name: " << sObj.name << endl;
    cout << "Roll No: " << sObj.rollNo << endl;
    cout << "Student Age: " << sObj.age << endl;

    return 0;
}