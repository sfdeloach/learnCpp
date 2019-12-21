#include <cmath>
#include <cstdlib>
#include <iostream>

/*
 *  title:       
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: 
 */

using namespace std;

int main()
{
   cout.precision(100);
   cout << sqrt(9.123456789012345678901234567890f) << endl;
   cout << sqrt(9.123456789012345678901234567890) << endl;
   cout << sqrt(9.123456789012345678901234567890l) << endl;

   cout << 2 + 5 * 9 - 2 / 2 << endl; // 2 + 45 - 1 = 46

   unsigned long long sum = 0;

   for (size_t i = 0; i < 128; i++)
   {
      // cout << pow(2, i) << endl;
      sum += pow(2, i);
      cout << "i: " << i << " " << sum << endl;
   }

   return 0;
}
