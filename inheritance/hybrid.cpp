#include<iostream>
using namespace std;

int main()
{
    // hybrid inheritance is a type of inheritance that combines two or more types of inheritance.
    class person
    {
    public:
        string name;
        int age;
    };
    class student : public person
    {
    public:
        int rollNo;
    };
    class teacher : public person
    {
    protected:
        double salary;
    public:
        string subject;
    };
    class TA : public student, public teacher
    {
    public:
        string department;
    };
    TA taObj;
    taObj.student::name = "Alice"; // Specify which 'name' to use
    taObj.student::age = 20;       // Specify which 'age' to use
    taObj.rollNo = 202;
    taObj.subject = "Mathematics";
    taObj.department = "Science";
    cout << "Name: " << taObj.student::name << endl; // Specify which
    cout << "Age: " << taObj.student::age << endl;   // Specify which
    cout << "Roll No: " << taObj.rollNo << endl;
    cout << "Subject: " << taObj.subject << endl;
    cout << "Department: " << taObj.department << endl;


    return 0;
}