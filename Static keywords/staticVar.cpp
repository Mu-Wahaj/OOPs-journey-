#include <iostream>
using namespace std;

// static variable is a variable that retains its value between function calls.
// it is initialized only once and its value is preserved between function calls.

// static variable in functions is initialized at once and remain in memory till the program is running
//  it is stored in data segment of memory
void func()
{
    static int count = 0; // static variable
    count++;
    cout << "count: " << count << endl;
}

// static variable in class is shared by all objects of the class.
// it is initialized only once and its value is preserved between function calls.
// its is usedin all objects of the class
// it is stored in data segment of memory
class Example
{
public:
    int staticVar; // static variable declaration
    void show()
    {
        staticVar = staticVar + 1;
    }
};
// static object
class ABC
{
public:
    ABC()
    {
        cout << "Constructor of ABC called" << endl;
    }
    ~ABC()
    {
        cout << "Destructor of ABC called" << endl;
    }
};
int main()
{
    func(); // count: 1
    func(); // count: 2
    func(); // count: 3
    Example e1;
    Example e2;
    e1.staticVar = 10; // static variable updated
    e2.staticVar = 5;  // static variable initialization
    // static variable can be accessed using class name also

    cout << e2.staticVar << endl;

    // static object example
    if (true)
    {
        static ABC obj; // Constructor of ABC called
                        // Destructor of ABC called when obj goes out of scope
    }

    cout << "End of main function" << endl;

    return 0;
}