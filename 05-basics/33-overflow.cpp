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

int main()
{
   char x = 127;

   cout << "signed char:" << endl;
   cout << (int)x << endl;
   cout << (int)x++ << endl;
   cout << (int)x << endl;

   unsigned char y = 127;

   cout << "unsigned char:" << endl;
   cout << (int)y << endl;
   cout << (int)y++ << endl;
   cout << (int)y << endl;

   return 0;
}
