#include <iostream>

using namespace std;

class person
{
public:
    int age;
    string *name;

    person(string name)
    {
        this->name = new string; // Allocate memory for the pointer
        *(this->name) = name;
        cout << "parent constructor called" << endl;
    }
 
    ~person() // Destructor to free allocated memory
    {
        cout << "parent Destructor called" << endl;
        delete name; // Free the dynamically allocated memory
        cout << "Memory freed" << endl;
    }

};

class student : public person
{
public:
    int rollno;


    student(string name) : person(name) // Call the parent constructor
    {
        cout << "child constructor called" << endl;
    }
    void getinfo()
    {
        cout << "Name: " << *name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }

    ~student() // Destructor to free allocated memory
    {
        cout << "child JDestructor called" << endl;
        delete name; // Free the dynamically allocated memory
        cout << "Memory freed" << endl;
    }
};


main()
{ 
    student s1("John"); // Create an object of Student
    s1.age = 20;
    s1.rollno = 101;
    s1.getinfo();
    
    return 0;
}