#include <iostream>
using namespace std;

// shallow copy constructor is a default constructor that initializes an object using another object of the same class.

// deep copy constructor is a default constructor that initializes an object using another object of the same class but also creates a new copy of dynamically allocated memory.

// heep memory is a memory that is allocated at runtime using the new operator and deallocated using the delete operator.
class teacher
{
public:
    int *age;
    string *name;

    teacher(int age, string name)
    {
        this->age = new int;
        *(this->age) = age;      // Allocate memory for the pointer and copy the value
        this->name = new string; // Allocate memory for the pointer
        *(this->name) = name;    // Copy the value to the allocated memory
    }
    teacher(teacher &originalobj)
    {
        cout << "custom Copy constructor called" << endl;
        this->age = new int; // Allocate memory for the pointer
        *(this->age) = *(originalobj.age);
        this->age = originalobj.age;
        this->name = new string; // Allocate memory for the pointer
        *(this->name) = *(originalobj.name);
        // Copy the value to the allocated memory
        // Note: This is a shallow copy, as it copies the pointer, not the string itself.
        // For deep copy, we would need to allocate new memory for the string.
        //
        // In this case, we are creating a deep copy of the string.
    }
    void getinfo()
    {
        cout << "Name: " << *name << endl;
        cout << "Age: " << *age << endl;
    }
};
int main()
{

    teacher t1(20, "Alice"); // Create an object of Student
    t1.getinfo();
    teacher t2(t1);

    // Copy constructor is called here
    *(t2.age) = 25;     // Change the age in t2
    *(t2.name) = "Bob"; // Change the name in t2

    t2.getinfo();
    teacher t3(t1);         // Create another object to demonstrate deep copy
    *(t3.age) = 30;         // Change the age in t3
    *(t3.name) = "Charlie"; // Change the name in t3
    t3.getinfo();           // t1 should still show "Alice" since we made a deep copy
    return 0;
}