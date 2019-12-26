/*
 *  title:       Factors of a Number 
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Write a program that asks for a number then provide all of its
 *               factors
 */

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   long n;

   cout << "Factors of a Number" << endl;
   cout << "Enter a number: ";
   cin >> n;

   for (long i = 1; i <= n / 2; ++i)
   {
      if (n % i == 0) {
         cout << i << " ";
      }
   }
   cout << n << " " << endl;

   return 0;
}
