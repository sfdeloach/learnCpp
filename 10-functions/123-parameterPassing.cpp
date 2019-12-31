/*
 *  title:       Passing Parameters in Functions
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 31, 2019
 *  description: An example of how to pass parameters in one of three ways:
 *                 1) By value
 *                 2) By address
 *                 3) By reference
 */

#include <iostream>

using namespace std;

/**
 *  This function receives its parameters as values, for example:
 *     int x = i;
 *     int y = j;
 *  where x and y are only local to the function's frame
 */
void swap_byValue(int x, int y)
{
   cout << "   swap_byValue() --------------" << endl;
   cout << "   Before swap: ";
   cout << "   x: " << x << ", y: " << y << endl;
   int temp = x;
   x = y;
   y = temp;
   cout << "   After swap: ";
   cout << "   x: " << x << ", y: " << y << endl;
}

/**
 *  This function receives its parameters as pointers to an address, which are
 *  located in the main() function frame. It is analogous to:
 *     int *x = &i;
 *     int *y = &j;
 */
void swap_byAddress(int *x, int *y)
{
   cout << "   swap_byAddress() ------------" << endl;
   cout << "   Before swap: ";
   cout << "   x: " << *x << ", y: " << *y << endl;
   int temp = *x;
   *x = *y;
   *y = temp;
   cout << "   After swap: ";
   cout << "   x: " << *x << ", y: " << *y << endl;
}

/**
 *  This function receives its parameters as references to variables that were
 *  defined in the main() function frame:
 *     int &x = i;
 *     int &y = j;
 *  Because x and y are aliases of variables defined in main(), any changes made
 *  affect the same locations in memory since they are the same. In other words,
 *  there a distinct and separate frame is not created when this function is
 *  called, treating it most likely as an inline function.
 */
void swap_byReference(int &x, int &y)
{
   cout << "   swap_byReference() ----------" << endl;
   cout << "   Before swap: ";
   cout << "   x: " << x << ", y: " << y << endl;
   int temp = x;
   x = y;
   y = temp;
   cout << "   After swap: ";
   cout << "   x: " << x << ", y: " << y << endl;
}

int main()
{
   int i = 10, j = 20;

   cout << endl
        << "main() -------------------------" << endl;
   cout << "i: " << i << ", j: " << j << endl;
   cout << "calling swap_byValue()..." << endl;
   swap_byValue(i, j);
   cout << "i: " << i << ", j: " << j << " (no persistent change)" << endl;

   cout << endl
        << "main() -------------------------" << endl;
   cout << "i: " << i << ", j: " << j << endl;
   cout << "calling swap_byAddress()..." << endl;
   swap_byAddress(&i, &j);
   cout << "i: " << i << ", j: " << j << " (persistent change)" << endl;

   cout << endl
        << "main() -------------------------" << endl;
   cout << "i: " << i << ", j: " << j << endl;
   cout << "calling swap_byReference()..." << endl;
   swap_byReference(i, j);
   cout << "i: " << i << ", j: " << j << " (persistent change)" << endl;

   return 0;
}