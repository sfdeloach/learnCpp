/*
 *  title:       Problems with Pointers
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 29, 2019
 *  description: Three common problems that arise with pointers
 *                 1. Uninitialized pointers
 *                 2. Memory leaks
 *                 3. Dangling pointers
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int addAndDelete(int *array, unsigned int size)
{
   int result = 0;

   for (unsigned int i = 0; i < size; ++i)
   {
      result += *(array + i);
   }

   // delete[] array; // not here! causes a dangling pointer

   return result;
}

int main()
{
   // Problem #1: uninitialized pointers ///////////////////////////////////////
   int x = 5;
   int *p; // warning: p is uninitialized

   // cout << *p << endl; // causes runtime error, seg fault

   p = &x;
   cout << *p << endl;

   // Problem #2: memory leak //////////////////////////////////////////////////
   int *heapArray = new int[10];

   for (int i = 0; i < 10; ++i)
   {
      *(heapArray + i) = i;
   }

   for (int i = 0; i < 10; ++i)
   {
      cout << (heapArray + i) << " ";
      cout << *(heapArray + i) << endl;
   }

   // heapArray = nullptr; // not yet! deallocate heap memory first
   delete[] heapArray; // warning, there is a difference between delete and
                       // delete[]
   heapArray = nullptr;

   // Problem #3: dangling pointers ////////////////////////////////////////////
   int *dangler = new int[5];
   int sum = addAndDelete(dangler, 5);
   cout << "sum: " << sum << endl;

   *dangler = 15;
   delete[] dangler;
   // cout << *(dangler + 1) << endl; // runtime error, memory was set free

   return 0;
}
