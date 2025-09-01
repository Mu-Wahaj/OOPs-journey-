#include <stdio.h>

// Abstraction is the process of hiding the implementation details and showing only the essential features of the object.
// It helps to reduce complexity and increase efficiency.
// it shows a layout of other classes. i.e what functions should be there in the derived class.
// exmaples of abstraction in C++ are abstract classes and interfaces.and its achieved using acess modifiers/specifiers  (private,protected,public)
class AbstractClass
{
public:
    virtual void show() = 0; // pure virtual function
};
class ConcreteClass : public AbstractClass
{
public:
    void show() override
    {
        printf("ConcreteClass show function called\n");
    }
};
int main()
{

    ConcreteClass obj;
    obj.show(); // calls ConcreteClass show function

    return 0;
}