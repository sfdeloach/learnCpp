/*
 *  title:       Display grades for student marks
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019
 *  description: Take three student marks and produce an
 *               average using type definitions and enums
 */

#include <iostream>

using namespace std;

typedef double marks;

int main()
{
   marks m1, m2, m3;
   double average;
   char grade;

   cout << "Enter three marks: ";
   cin >> m1 >> m2 >> m3;

   average = (m1 + m2 + m3) / 3;

   if (average >= 60)
   {
      grade = 'A';
   }
   else if (average >= 35)
   {
      grade = 'B';
   }
   else
   {
      grade = 'C';
   }

   cout << "The average is " << average << " - " << grade << endl;

   return 0;
}
