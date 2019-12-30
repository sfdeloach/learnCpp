/*
 *  title:       Quiz 5
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 29, 2019
 *  description: code snippets from quiz 5
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   // Question 4
   int x = 10;
   int &y = x;
   y = x + y;
   cout << x << endl;
   cout << y << endl;

   // Question 5
   int a = 10;
   int *b = &a;
   int *&c = b;

   cout << "a = " << a << "\t\t\t&a = " << &a << endl;
   cout << "b = " << b << "\t&b = " << &b << "\t*b = " << *b << endl;
   cout << "c = " << c << "\t&c = " << &c << "\t*c = " << *c << endl;

   return 0;
}
