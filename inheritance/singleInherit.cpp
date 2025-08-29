#include <iostream>
using namespace std;

int main()
{
    // single inheritance is a type of inheritance where a class (derived class) inherits from another class (base class).
    class Base
    {
    public:
        void display()
        {
            cout << "Base class display function called." << endl;
        }
    };
    class Derived : public Base
    {
    public:
        void show()
        {
            cout << "Derived class show function called." << endl;
        }
    };
    Derived obj;
    obj.display(); // Calling base class function
    obj.show();    // Calling derived class function

    
    return 0;
}