#include <iostream>
using namespace std;

// function to change value of x
void changeA(int *a)
{
    *a = 30; // dereference pointer to change value
}

int main()
{
    // pointers are variables that store the address of another variable.
    int a = 10;
    int *p = &a;                         // p is a pointer that stores the address of variable a]
    cout << "Value of a: " << p << endl; // prints 10
    cout << "Address of a: " << &a << endl;

    // pointer to pointer is a variable that stores the address of another pointer variable.
    int **q = &p;
    cout << "Address of pointer p: " << &p << endl; // prints address of pointer p
    cout << "Value of pointer q: " << *q << endl;   // prints value of pointer q

    // example

    int b = 5;
    int *ptr = &b;       // p is a pointer to a
    int **parptr = &ptr; // q is a pointer to pointer p

    cout << *(&b) << endl;
    cout << *(&ptr) << endl;
    cout << **parptr << endl;
    cout << ptr << endl;
    cout << *parptr << endl;

    // pass by refrence

    int x = 20;
    changeA(&x);
    cout << "changed value of x: " << x << endl;

    int arr[] = {1, 2, 3, 4, 5};
    cout << *(arr + 2) << endl;
    cout << *(arr + 1) << endl;
    int *point2;
    int *point1 = point2 + 2;
    // point2 is a pointer to point1
    cout << point1 - point2 << endl; // prints the difference between point1 and point2
    return 0;
  
}
