/*
 *  title:       Pointers to Functions
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 29, 2019
 *  description: Simple example using a pointer to a function
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

void hello()
{
   cout << "Hello!" << endl;
   return;
}

int addItUp(int a, int b)
{
   return a + b;
}

int subItUp(int a, int b)
{
   return a - b;
}

int signatureNotMatching(int a, int b, double c)
{
   return a + b;
}

int main()
{
   void (*funPointer)();
   funPointer = hello;

   (*funPointer)();

   int (*anotherFunPointer)(int, int) = addItUp;
   cout << (*anotherFunPointer)(5, 3) << endl;

   // reassign the function pointer
   anotherFunPointer = subItUp;
   cout << (*anotherFunPointer)(5, 3) << endl;

   // cannot reassign function pointer unless signature matches
   // anotherFunPointer = signatureNotMatching; // invalid conversion
   // function pointers are related to polymorphism and the overriding of
   // member methods!

   return 0;
}
