/*
 *  title:       Student Exercise #1
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: Write a program to calculate the area of a circle only taking one
 *               input, radius, as an input
 */

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   double radius, area;

   cout << "Enter the radius: ";
   cin >> radius;

   area = 4 * atan(1) * pow(radius, 2);

   cout << "The area is " << area << endl;

   return 0;
}
