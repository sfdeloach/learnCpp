/*
 *  title:       Recursive Functions
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 1, 2020
 *  description: Write a program that calculates factorial numbers. Write
 *               functions that are both tail and non-tail recursive
 */

#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

unsigned long ntFact(unsigned long);
unsigned long tFact(unsigned long);
unsigned long _tFact(unsigned long, unsigned long);

int main()
{
   unsigned long input;

   cout << "*** Factorial ***" << endl
        << "Enter an integer: ";
   cin >> input;

   cout << "Non-tail recursive solution: " << ntFact(input) << endl;
   cout << "    Tail recursive solution: " << tFact(input) << endl;

   return 0;
}

unsigned long tFact(unsigned long input)
{
   return _tFact(input, 1);
}

unsigned long _tFact(unsigned long input, unsigned long acc)
{
   if (input == 0)
      return acc;

   return _tFact(input - 1, acc * input);
}

unsigned long ntFact(unsigned long input)
{
   if (input == 0)
      return 1;

   return input * ntFact(input - 1);
}