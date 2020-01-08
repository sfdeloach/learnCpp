/**
 *  Title:        Student Exercise #10 - Rational Number Class
 *  Name:         Steven DeLoach (sfdeloach@gmail.com)
 *  Date:         Jan 8, 2020
 *  Description:  A program that defines and demonstrates a class modeled on a
 *                rational number. Overloaded operations include adding, sub-
 *                tracting, multiplication, and division. Insertion operator is
 *                also provided for writing to an outstream.
 */

#include <iostream>
#include <cmath>

enum sign
{
   NEGATIVE,
   POSITIVE
};

class rational_num
{
private:
   long numer;
   long denom;
   sign s;

public:
   rational_num(long n = 0, long d = 1)
   {
      numer = abs(n);
      denom = abs(d);
      s = (n > 0) ^ (d > 0) ? NEGATIVE : POSITIVE;
   }

   rational_num operator+(rational_num &n);
   rational_num operator-(rational_num &n);
   rational_num operator*(rational_num &n);
   rational_num operator/(rational_num &n);

   friend std::ostream &operator<<(std::ostream &out, rational_num &n);
};

rational_num rational_num::operator+(rational_num &n)
{
   // TODO
}

rational_num rational_num::operator-(rational_num &n)
{
   // TODO
}

rational_num rational_num::operator*(rational_num &n)
{
   // TODO
}

rational_num rational_num::operator/(rational_num &n)
{
   // TODO
}

std::ostream &operator<<(std::ostream &out, rational_num &n)
{
   if (n.denom == 1 && n.s == POSITIVE)
      out << n.numer;
   else if (n.denom == 1 && n.s == NEGATIVE)
      out << '-' << n.numer;
   else if (n.s == POSITIVE)
      out << n.numer << '/' << n.denom;
   else
      out << '-' << n.numer << '/' << n.denom;

   return out;
}

int main()
{
   rational_num r1{rational_num(2)};
   rational_num r2{rational_num(-5)};
   rational_num r3{rational_num(2, 4)};
   rational_num r4{rational_num(-3, 2)};
   rational_num r5{rational_num(5, -1)};
   rational_num r6{rational_num(-4, -2)};

   std::cout << r1 << " " << r2 << " " << r3 << " ";
   std::cout << r4 << " " << r5 << " " << r6 << std::endl;
}