/*
 *  title:       Double Matrix
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 29, 2019
 *  description: Write a program that asks the user to input a matrix, then
 *               overwrite the existing matrix with its double.
 * 
 */

#include <iostream>

using namespace std;

int main()
{
   int len = 0;

   cout << "How many elements: ";
   cin >> len;

   int array[len];

   for (int &x : array)
   {
      cout << "> ";
      cin >> x;
   }

   for (int &x : array)
   {
      x *= 2;
   }

   cout << "[ ";
   for (int x : array)
   {
      cout << x << " ";
   }
   cout << "]" << endl;
}
