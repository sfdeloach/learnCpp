/*
 *  title:       Return by Reference
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 31, 2019
 *  description: Functions commonly return r-values, which are ususally assigned
 *               to variables in the calling function. C++ has an interesting
 *               feature where it can return a l-value by reference leading to
 *               an unusual assignment statement.
 */

#include <iostream>

using namespace std;

int &fun(int &x)
{
   ++x;
   x %= 2;
   return x;
}

int main()
{
   auto var = 4;
   cout << fun(var) << endl; // not unusual, fun(var) evaluates to an r-value
   fun(var) = 5;             // fun(var) acting like an l-value here
   cout << var << endl;      // proof that the previous statement: var = 5
   fun(var) = fun(var);      // acting like both l and r values
   cout << var << endl;      // same as var = fun(5) = 0

   return 0;
}