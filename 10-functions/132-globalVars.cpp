/*
 *  title:       Local and Global Variables
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 1, 2020
 *  description: Demonstrates the locations in memory where stack/heap, local/
 *               global variables are stored. Also, demonstrates variable name
 *               scoping, very much like method overriding.
 */

#include <iostream>

using namespace std;

int var = 100;

void func()
{
   int var = 50;
   cout << "func,\t\tvar = " << var << ",\t" << &var << "\tstack" << endl;
}

void sfunc()
{
   static int svar = 45;
   cout << "sfunc,\t\tsvar = " << svar << ",\t" << &svar << "\tcode" << endl;
}

int main()
{
   cout << "--------------------------------------------------------" << endl;
   cout << "program loc\tvalue\t\tmemory add\tmem loc" << endl;
   cout << "--------------------------------------------------------" << endl;
   int var = 10;

   {
      int var = 1;
      cout << "main (block),\tvar = " << var << ",\t" << &var << "\tstack" << endl;
   }

   cout << "main,\t\tvar = " << var << ",\t" << &var << "\tstack" << endl;

   func();

   int *pvar = new int[1000];
   cout << "main,\t\tpvar[1000] = " << pvar[1000] << ",\t" << (pvar + 1000) << "\theap" << endl;
   cout << "main,\t\tpvar[0] = " << *pvar << ",\t" << pvar << "\theap" << endl;
   delete[] pvar;

   cout << "global,\t\tvar = " << ::var << ",\t" << &::var << "\tcode" << endl;

   sfunc();

   cout << "--------------------------------------------------------" << endl;

   return 0;
}