/*
 *  title:       Armstrong Numbers
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Ask the user for a number, determine if the number is an
 *               Armstrong number
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   long n;
   long sum = 0;
   long len = 0; // number of digits in n

   cout << "*** Armstrong numbers ***" << endl
        << "Enter an integer: ";
   cin >> n;

   for (long i = n; i > 0; ++len)
   {
      i /= 10;
   }

   for (long i = n; i > 0;)
   {
      sum += pow(i % 10, len);
      i /= 10;
   }

   cout << sum << endl;

   if (sum == n)
   {
      cout << "armstrong";
   }
   else {
      cout << "not armstrong";
   }

   return 0;
}
