/*
 *  title:       Pointer Arithmetic
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 29, 2019
 *  description: The five pointer arithmetic operations
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int A[5] = {2, 4, 6, 8, 10};
   int *p = A;
   int *q = &A[4];

   cout << "*p: " << *p << ", p: " << p << endl;

   // There are five operations allowed with pointers
   //   1. increment
   //   2. decrement
   //   3. adding an int to a pointer
   //   4. subtracting an int from a pointer
   //   5. substracting two pointers, useful for determining the relative
   //      locations of the pointers

   p++; // p now points to the next element
   cout << "*p: " << *p << ", p: " << p << endl;

   p--; // p went back to pointing to the prior element
   cout << "*p: " << *p << ", p: " << p << endl;

   p += 3; // p skipped ahead three elements, now points to 3rd element, 8
   cout << "*p: " << *p << ", p: " << p << endl;

   p -= 2; // p moves back two elements
   cout << "*p: " << *p << ", p: " << p << endl;

   int d = q - p; // if d < 0, q is pointing before p
   cout << "d: " << d << endl;

   // BONUS: Not considered a pointer arithmetic operation but demonstrated
   //        as an example of operator precedence
   (*p)++; // the element point to p is incremented
   cout << "*p: " << *p << ", p: " << p << endl;

   return 0;
}
