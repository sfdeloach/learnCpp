/*
 *  title:       Number Palindrome 
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Ask the user for a number, determine if the number is a
 *               palindrome 
 */

#include <iostream>

using namespace std;

int main()
{
   int x, copy, reverse = 0;

   cout << "*** Palindrome ***\n"
        << "Enter an integer: ";
   cin >> x;

   copy = x;

   while (copy > 0)
   {
      reverse *= 10;
      reverse += copy % 10;
      copy /= 10;
   }

   if (x == reverse)
   {
      cout << "is palindrome" << endl;
   }
   else
   {
      cout << "is NOT palindrome" << endl;
   }

   return 0;
}
