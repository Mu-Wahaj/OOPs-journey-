#include <iostream>
#include <string>
using namespace std;

// abstract class is a class that cannot be instantiated.
//  It is used as a base class for other classes.
//  It is achieved by declaring at least one pure virtual function in the class.
//  A pure virtual function is a virtual function that is declared by assigning 0 in its declaration
// when a classs has at least one pure virtual function then it becomes an abstract class
//  An abstract class can have data members and member functions.
class shape
{


    virtual void draw() = 0; // pure virtual function
};
class rectangle : public shape
{
public:
    void draw() override
    {
        cout << "drawing rectangle" << endl;
    }
};
int main()
{

    rectangle r1;
    r1.draw();
    return 0;
}