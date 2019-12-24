/*
 *  title:       Greatest Common Divisor
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Ask the user for two numbers, determine the greatest common
 *               divisor using Euclid's algorithm
 *               https://en.wikipedia.org/wiki/Greatest_common_divisor#Euclid's_algorithm
 */

#include <iostream>

using namespace std;

int main()
{
   int x, y,
       remainder;

   cout << "*** GCD ***\n"
        << "Enter two integers: ";
   cin >> x >> y;

   int max = x <= y ? y : x;
   int min = x >= y ? y : x;

   do
   {
      remainder = max % min;
      max = min;
      min = remainder != 0 ? remainder : min;
   } while (remainder != 0);

   cout << min << endl;

   return 0;
}
