/*
 *  title:       Reverse Digits
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Ask the user for a number, provide the reverse only using
 *               loops and arithmetic operations
 */

#include <iostream>

using namespace std;

int main()
{
   long n;

   cout << "*** Reverse Digits ***" << endl << "Enter an integer: ";
   cin >> n;

   while (n > 0)
   {
      cout << (n % 10);
      n /= 10;
   }

   cout << endl;

   return 0;
}
