#include <bitset>
/*
 *  title:       
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: 
 */

#include <iostream>

using namespace std;

int main()
{
   int a = 0b00110; // 6
   int b = 0b01010; // 10
   int c = 6;
   int d = 10;

   while (d != 0)
   {
      int carryover = c & d;
      c = c ^ d;
      d = carryover << 1;
   }

   bitset<8> x(a + b);

   cout << "Sum = 0b" << x << endl;
   cout << "Sum = " << c << endl;

   return 0;
}
