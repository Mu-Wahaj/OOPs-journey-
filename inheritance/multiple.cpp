#include<iostream>
using namespace std;

int main()
{
    // multiple inheritance is a type of inheritance where a class (derived class) inherits from more than one class (base classes).

    class teachr
    {
    protected:
        double salary;

    public:
        string subject;
    };
    class student
    {
    public:
        string name;
        int rollNo;
    };
    class TA : public teachr, public student
    {
    public:
        string department;
    };

    TA taObj;
    taObj.name = "Alice";
    taObj.rollNo = 202;
    taObj.subject = "Mathematics";
    taObj.department = "Science";
    cout << "Name: " << taObj.name << endl;
    cout << "Roll No: " << taObj.rollNo << endl;
    cout << "Subject: " << taObj.subject << endl;
    cout << "Department: " << taObj.department << endl;
    return 0;
}