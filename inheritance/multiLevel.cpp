#include<iostream>
using namespace std;

int main()
{
    // multilevel inheritance is a type of inheritance where a class (derived class) inherits from another class (base class), and then another class inherits from the derived class.
    class GrandParent
    {
    public:
        string name;
        int age;
    };
    class Parent : public GrandParent
    {
    public:
        int id;
    };
    class Child : public Parent
    {
    public:
        double salary;
    };
    Child childObj;
    childObj.name = "John";
    childObj.age = 50;
    childObj.id = 101;
    childObj.salary = 50000.50;
    cout << "Name: " << childObj.name << endl;
    cout << "Age: " << childObj.age << endl;
    cout << "ID: " << childObj.id << endl;
    return 0;
}