/*
 *  title:       Binary search
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 26, 2019
 *  description: Write a program that asks the user for a number, then search a
 *               defined array for the number, if found return the index number,
 *               otherwise return -1
 */

#include <iostream>

using namespace std;

int main()
{
   int A[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
   int A_length = sizeof(A) / sizeof(A[0]);
   int num, high = A_length - 1, low = 0, mid;

   cout << "*** Binary Search ***" << endl;
   cout << "Enter an integer: ";
   cin >> num;

   while (high >= low)
   {
      mid = (high + low) / 2;
      cout << low << " " << mid << " " << high << endl;
      if (A[mid] == num)
      {
         cout << "Number found at " << mid << endl;
         return 0;
      }
      else if (A[mid] > num)
      {
         high = mid - 1;
      }
      else
      {
         low = mid + 1;
      }
   }

   cout << "Number not found." << endl;
   return -1;
}
