/*
 *  title:       Find the maximum
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 24, 2019
 *  description: Ask the user for the number of elements, receive the inputs
 *               then provide the maximum number entered.
 */

#include <iostream>
#include <cmath>

using namespace std;

int SIZE_INT = sizeof(int) * 8;

int main()
{
   int length, max = -1 * pow(2, SIZE_INT); // set max to smallest value of int

   cout << "*** Find the max ***" << endl;
   cout << "How many elements: ";
   cin >> length;

   int array[length];

   for (int i = 0; i < length; ++i)
   {
      cout << "> ";
      cin >> array[i];
      if (i == 0 || array[i] > max)
      {
         max = array[i];
      }
   }

   cout << max << endl;

   return 0;
}
