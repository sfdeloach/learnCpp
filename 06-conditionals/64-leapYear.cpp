/*
 *  title:       Leap Year
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019
 *  description: All years which are perfectly divisible by four are leap years except for
 *               century years (years ending with 00) which is leap year only if it is perfectly
 *               divisible by 400.
 * 
 *               For example: 2012, 2004, 1968, etc, are leap years
 *                            1971, 2006, etc are NOT leap years
 *                            1200, 1600, 2000, 2400, etc are leap years
 *                            1700, 1800, 1900, etc are NOT leap years
 */

#include <iostream>

using namespace std;

int main()
{
   int year;

   cout << "Enter year: ";
   cin >> year;

   if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
   {
      cout << year << " is a leap year" << endl;
   }
   else
   {
      cout << year << " is NOT a leap year" << endl;
   }

   return 0;
}
