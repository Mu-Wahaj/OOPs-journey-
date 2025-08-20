
using namespace std;
#include <iostream>

//destructor is a special member function that is called when an object of a class is destroyed.
// It is used to release resources that were allocated to the object during its lifetime.
class teacher
{
public:
    int age;
    string *name;


    //constructor
    teacher(int age, string name)
    {
        this->age = age;    
        this->name = new string; 
        *(this->name) = name;    
    }
    //destructor
    ~teacher()
    {
        cout << "Destructor called" << endl;
        delete name; // Free the dynamically allocated memory
        cout << "Memory freed" << endl;
    }
 
    void getinfo()
    {
        cout << "Name: " << *name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{

    teacher t1(20, "Alice"); // Create an object of Student
    t1.getinfo();
  
    return 0;
}