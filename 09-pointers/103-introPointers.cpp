/*
 *  title:       Intro to Pointers
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 27, 2019
 *  description: 
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int a = 10;
   int *p = &a;

   int array1[] = {4, 5, 2, 3, 0};
   int array2[] = {6, 7, 2, 3, 0};
   int *pa = &array1[0];

   cout << "a =  " << a << endl;
   cout << "&a = " << &a << endl;
   cout << "p =  " << p << endl;
   cout << "&p = " << &p << endl;
   cout << "*p = " << *p << endl;

   cout << "&array1 = " << &array1 << endl;
   cout << "array1 = " << array1 << endl;
   cout << "&array1[0] = " << &array1[0] << endl;
   cout << "*pa = " << *pa << endl;
   cout << "*(pa + 1) = " << *(pa + 1) << endl;

   pa = array2;

   cout << "*pa = " << *pa << endl;
   cout << "*(pa + 1) = " << *(pa + 1) << endl;

   return 0;
}
