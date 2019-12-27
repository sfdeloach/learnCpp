/*
 *  title:       Pattern Two
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 26, 2019
 *  description: Write a program that creates the pattern demonstrated in the lecture
 */

#include <iostream>

using namespace std;

int main()
{
   for (int i = 0; i < 4; ++i)
   {
      for (int j = 0; j <= i; ++j)
      {
         cout << "*";
      }
      cout << endl;
   }
}
