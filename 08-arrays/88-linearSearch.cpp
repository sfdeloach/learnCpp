/*
 *  title:       Linear search
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 26, 2019
 *  description: Write a program that asks the user for a number, then search a
 *               defined array for the number, if found return the index number,
 *               otherwise return -1
 */

#include <iostream>

using namespace std;

int main()
{
   int A[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
   int A_length = sizeof(A) / sizeof(A[0]);
   int num;

   cout << "*** Linear Search ***" << endl;
   cout << "Enter an integer: ";
   cin >> num;

   for (int i = 0; i < A_length; ++i)
   {
      if (A[i] == num)
      {
         cout << "Number found at index " << i << endl;
         return 0;
      }
   }

   cout << "Number not found." << endl;
   return -1;
}
