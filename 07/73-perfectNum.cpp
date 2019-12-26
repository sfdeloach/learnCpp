/*
 *  title:       Perfect Number 
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Write a program that asks for a number then determines if the 
 *               number is a perfect number
 */

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   long n, sum = 0;

   cout << "*** Perfect Number ***" << endl;
   cout << "Enter a number: ";
   cin >> n;

   for (long i = 1; i <= n / 2; ++i)
   {
      if (n % i == 0) {
         sum += i;
      }
   }

   if (n == sum) {
      cout << n << " is a perfect number." << endl;
   } else {
      cout << n << " is not a perfect number." << endl;
   }

   return 0;
}
