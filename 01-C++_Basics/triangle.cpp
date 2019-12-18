/*
 *  title:       Find the area of a triangle
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 17, 2019
 *  description: 
 */

#include<cmath>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   double base, height;
   base = height = 0;
   
   cout << "Find the area of a triangle" << endl;
   cout << "Enter base & height: ";
   cin >> base >> height;
   cout << "The area is " << 0.5 * base * height << endl;

   return 0;
}
