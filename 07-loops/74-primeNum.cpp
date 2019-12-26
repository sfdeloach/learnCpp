/*
 *  title:       Prime Number 
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 23, 2019
 *  description: Write a program that asks for a number then determines if the 
 *               number is a prime number
 */

#include <iostream>

using namespace std;

int main()
{
   long n;
   bool isPrime = true;

   cout << "*** Prime Number ***" << endl;
   cout << "Enter a positive integer: ";
   cin >> n;

   if (n <= 0)
   {
      cout << "Number entered is not positive." << endl;
   }
   else if (n == 1)
   {
      cout << "1 is not prime." << endl;
   }
   else
   {
      for (long i = 2; i <= n / 2; ++i)
      {
         if (n % i == 0)
         {
            isPrime = false;
            cout << n << " is not prime." << endl;
            break;
         }
      }
      if (isPrime)
      {
         cout << n << " is a prime number." << endl;
      }
   }

   return 0;
}
