/*
 *  title:       Adding Elements
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 24, 2019
 *  description: Ask the user for the number of elements, receive the inputs
 *               then provide the sum.
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int length, element, sum = 0;

   cout << "*** Sum Elements ***" << endl;
   cout << "How many elements: ";
   cin >> length;

   int array[length];

   for (int i = 0; i < length; ++i)
   {
      cout << "> ";
      cin >> element;
      array[i] = element;
   }

   for (auto x : array)
   {
      cout << x << " + ";
      sum += x;
   }
   cout << "\b\b= " << sum << endl;

   return 0;
}
