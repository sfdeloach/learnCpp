/*
 *  title:       
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: 
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

enum Day
{
   mon, // = 0 by default
   tue,
   wed = 5,
   thu, // = 6
   fri, // = 7
   sat, // = 8
   sun  // = 9
};

typedef int score;
typedef float dist;
typedef string name;

int main()
{
   // enum example

   Day day = mon;
   // Day day = 0; // cannot assign integer to enum type

   switch (day)
   {
   case mon:
      cout << "It's Monday" << endl;
      cout << "Value of mon: " << mon << endl; // mon = 0
      cout << "Value of sat: " << sat << endl; // sat = 8
      break;
   default:
      cout << "It's not Monday" << endl;
      break;
   }

   // typedef example

   score x = 5;
   dist y = 3.14;
   name person = "Steven";

   cout << x << " " << y << " " << person << endl;

   return 0;
}
