
#include <iostream>
using namespace std;

// polymorphism in cpp is the ability of a function or an operator to behave in different ways based on the context in which they are used.

// There are two types of polymorphism in C++: compile-time (or static) and runtime (or dynamic) polymorphism.

// Compile-time polymorphism is achieved through function overloading and operator overloading.
// constructors are also example of compile time polymorphism

// function overloading is a feature in C++ that allows you to have multiple functions with the same name but different parameters.
// The compiler determines which function to call based on the arguments passed to the function.
class polymorphism
{
public:
    void show(int i)
    {
        cout << "Integer: " << i << endl;
    }
    void show(char ch)
    {
        cout << "Double: " << ch << endl;
    }
    // this is an example of function overloading
    // the function name is same but the parameters are different
};


// operator overloading is a feature in C++ that allows you to redefine the way operators work for user-defined types.
// For example, you can overload the + operator to add two objects of a class together.

//example of operator overloading

class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    // Overload + operator to add two Point objects
    Point operator+(const Point& other) {
        return Point(x + other.x, y + other.y);
    }
};


int main()
{
    polymorphism p1;            // default constructor called
    p1.show(5);                 // calls show(int)
    p1.show('A');               // calls show(char)
  


    // Example of operator overloading
     Point p2(2, 3);
    Point p3(4, 5);
    Point p4 = p2 + p3; // Uses overloaded + operator
    cout << "Point sum: (" << p4.x << ", " << p4.y << ")" << endl;


    return 0;
}