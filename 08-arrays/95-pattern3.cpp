/*
 *  title:       Pattern Three
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 26, 2019
 *  description: Write a program that creates the pattern demonstrated in the lecture
 * 
 *               0123
 *                  * 0
 *                 ** 1
 *                *** 2
 *               **** 3
 */

#include <iostream>

using namespace std;

int main()
{
   for (int i = 0; i < 4; ++i)
   {
      for (int j = 0; j < 4; ++j)
      {
         if (i + j > 2) cout << "*";
         else cout << " ";
      }
      cout << endl;
   }
}
