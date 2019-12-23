/*
 *  title:       Multiplication Table
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019
 *  description: Create a multiplication table using for loops
 */

#include <iostream>

using namespace std;

int main()
{
   int columns, rows;

   cout << "Enter columns: ";
   cin >> columns;
   cout << "Enter rows: ";
   cin >> rows;

   // print column header
   cout << "\t";
   for (int i = 0; i <= columns; ++i)
   {
      cout << i << "\t";
   }
   cout << endl;

   // create multiplication table
   for (int i = 0; i <= columns; ++i)
   {
      cout << i << "\t";
      for (int j = 0; j <= rows; ++j)
      {
         cout << (i * j) << "\t";
      }
      cout << endl;
   }

   return 0;
}
