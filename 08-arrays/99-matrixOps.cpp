/*
 *  title:       Matrix Operations
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 27, 2019
 *  description: Create two matrices and add them to create a third matrix
 * 
 */

#include <iostream>

using namespace std;

int main()
{
   int A[][3] = {5, 2, 9, 9, 2, 1};
   int B[][3] = {{9, 1, 0}, {12, 9, 4}};
   int C[2][3];

   for (int i = 0; i < 2; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         C[i][j] = A[i][j] + B[i][j];
         cout << C[i][j] << " ";
      }
      cout << endl;
   }

   for (auto &x : A)
   {
      for (auto &y : x)
      {
         y *= 2;
      }
      cout << endl;
   }

   for (int i = 0; i < 2; ++i)
   {
      for (int j = 0; j < 3; ++j)
      {
         cout << A[i][j] << " ";
      }
      cout << endl;
   }
}
