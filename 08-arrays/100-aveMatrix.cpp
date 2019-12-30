/*
 *  title:       Matrix Average
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 27, 2019
 *  description: Write a program that calculates the average of all elements in
 *               an array
 * 
 */

#include <iostream>

using namespace std;

int main()
{
   double array[][5] = {5.3, 2.7, 2.9, 1.2, 4.2, 9.4, 3.5, 3.2, 0.9, 5.2};
   double sum = 0.0;
   int ctr = 0;

   for (auto &x : array)
   {
      for (double &y : x)
      {
         sum += y;
         ++ctr;
      }
   }

   cout << "Ave: " << sum / (double)ctr << endl;
}
