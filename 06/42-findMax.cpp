/*
 *  title:       
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: Create a program that receives two inputs and prints a message indicating the
 *               larger value. The message should indicate if the values are equal.
 */

#include <iostream>

using namespace std;

int main()
{
   int i, j;

   cout << "Enter an integer: ";
   cin >> i;
   cout << "Enter another integer: ";
   cin >> j;

   if (i == j)
   {
      cout << "Entered values are equal." << endl;
   }
   else if (i > j)
   {
      cout << i << " is larger than " << j << endl;
   }
   else
   {
      cout << j << " is larger than " << i << endl;
   }

   // Truthy and falsy values exist for all primitive types
   if (0.0001f)
   {
      cout << "this will print" << endl;
   }

   if ('a')
   {
      cout << "this will print" << endl;
   }

   char zero = 0;

   if (zero)
   {
      cout << "this will not print" << endl;
   }

   // Truthy/falsy values do not exist for strings
   string s = "";

   // if (s) // this will not work
   // {
   //    cout << "this will not print" << endl;
   // }

   return 0;
}
