#include<iostream>
using namespace std;

int main()
{
    //pointers are variables that store the address of another variable.
    int a = 10;
    int *p = &a; // p is a pointer that stores the address of variable a]
    cout << "Value of a: " << p << endl; // prints 10
    cout << "Address of a: " << &a << endl;


    //pointer to pointer is a variable that stores the address of another pointer variable.
    int **q = &p;   
    cout << "Address of pointer p: " << &p << endl; // prints address of pointer p
    cout << "Value of pointer q: " << *q << endl; // prints value of pointer q
    return 0;
}