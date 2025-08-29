#include <iostream>
#include <string>
using namespace std;

// polymorphism in cpp is the ability of a function or an operator to behave in different ways based on the context in which they are used.
// There are two types of polymorphism in C++: compile-time (or static) and runtime (or dynamic) polymorphism.
// Compile-time polymorphism is achieved through function overloading and operator overloading.

class polymorphism
{
public:
    string name;

    polymorphism()
    {
        cout << "default constructor called" << endl;
    }

    polymorphism(string name)
    {
        this->name = name;
        cout << "parmeterized constructor called" << endl;
    }
};

int main()
{
    polymorphism p1;            // default constructor called
    polymorphism p2("example"); // parmeterized constructor called

    return 0;
}
