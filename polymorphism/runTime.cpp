#include <iostream>
using namespace std;

// Runtime polymorphism is achieved through inheritance and virtual functions.
// It allows a program to decide at runtime which function to call based on the type of the object pointed to by a base class pointer.
// This is useful when you want to call derived class methods through base class pointers.

// function overriding is a feature in C++ that allows a derived class to provide a specific implementation of a function that is already defined in its base class.
class parent
{
public:
    void show()
    {
        cout << "parent class show function called" << endl;
    }
};
class child : public parent
{
public:
    void show() // overriding the parent class show function
    {
        cout << "child class show function called" << endl;
    }
};

// virtual function is a member function in the base class that you expect to override in derived classes.
// When you use a base class pointer to point to a derived class object and call a virtual
// function, the derived class's version of the function is executed.
// This is known as dynamic dispatch or late binding.
class Base
{
public:
   virtual  void display()
    { // virtual function
        cout << "Base class display function called" << endl;
    }
};
class Derived : public Base
{
public:
    void display() override
    { // overriding the base class display function
        cout << "Derived class display function called" << endl;
    }
};

int main()
{
    child c1;
    c1.show(); // calls child class show function and overriding the parent class show function

    // virtual function example
    Base *bptr;      // base class pointer
    Derived d;       // derived class object
    bptr = &d;       // base class pointer points to derived class object
    bptr->display(); // calls derived class display function
    // if display function is not virtual then it will call base class display function
    // because base class pointer is pointing to base class object
    // but if display function is virtual then it will call derived class display function
    return 0;
}