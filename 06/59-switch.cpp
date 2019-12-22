#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

enum Day
{
   M = 1,
   T,
   W,
   R,
   F
};

int main()
{
   int day;

   cout << "Enter a day: ";
   cin >> day;

   switch (day)
   {
   case M:
      cout << "It's Monday, go away, don't bother me" << endl;
      break;
   case T:
   case W:
      cout << "It's early mid week...still so far away!" << endl;
      break;
   default:
      cout << "Is it the weekend yet?" << endl;
   }

   return 0;
}
