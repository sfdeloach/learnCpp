/*
 *  title:       Sum of n number
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019
 *  description: Write a program that sums all numbers n to zero
 */

#include <iostream>

using namespace std;

int main()
{
   long sum;
   long n;

   cout << "Enter n: ";
   cin >> n;

   // using closed-form expression
   sum = (n * (n + 1)) / 2;
   cout << "Sum = " << sum << endl;

   // using do-while loop
   sum = 0;
   long i = 0;
   do
   {
      sum += ++i;
      if (i % (n / 4) == 0)
      {
         cout << ".";
      }
   } while (i < n);

   cout << "\nSum = " << sum << endl;

   return 0;
}
