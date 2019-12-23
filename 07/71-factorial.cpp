/*
 *  title:       Factorial of a number
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019
 *  description: 
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

const long double PI = 4 * atan(1);
const long double E = exp(1);

int main()
{
   long n;

   cout << "Enter n: ";
   cin >> n;

   long double factStirling = pow(2.0 * PI * n, 0.5) * pow(n / E, n);

   cout << "Stirling's approximation: " << factStirling << endl;

   long factorial = 1;
   for (int i = 1; i <= n; ++i)
   {
      factorial *= i;
   }

   cout << "Looping calculation:      " << factorial << endl;
   cout << "Error: " << (double)100 * (factorial - factStirling) / (double)(factorial) << "%" << endl;

   return 0;
}
