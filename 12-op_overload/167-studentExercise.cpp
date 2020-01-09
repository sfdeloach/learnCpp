/**
 *  Title:        Student Exercise #10 - Rational Number Class
 *  Name:         Steven DeLoach (sfdeloach@gmail.com)
 *  Date:         Jan 8, 2020
 *  Description:  A program that defines and demonstrates a class modeled on a
 *                rational number. Overloaded operations include adding, sub-
 *                tracting, multiplication, and division. Insertion operator is
 *                also provided for writing to an outstream.
 */

#include <algorithm>
#include <cmath>
#include <iostream>

enum sign
{
   NEGATIVE = -1,
   POSITIVE = 1
};

class rational_num
{
private:
   unsigned long numer;
   unsigned long denom;
   sign s;

   void reduce();

public:
   rational_num(long n = 0, long d = 1)
   {
      numer = abs(n);
      denom = abs(d);
      s = (n * d < 0) ? sign::NEGATIVE : sign::POSITIVE;
   }

   rational_num operator+(rational_num &n);
   rational_num operator-(rational_num &n);
   rational_num operator*(rational_num &n);
   rational_num operator/(rational_num &n);

   friend std::ostream &operator<<(std::ostream &out, rational_num &n);
};

void rational_num::reduce()
{
   unsigned long gcd = 1;
   unsigned long min = std::min(numer, denom);
}

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
   return rational_num(s * n.s * numer * n.numer, denom * n.denom);
}

rational_num rational_num::operator/(rational_num &n)
{
   return rational_num(s * n.s * numer * n.denom, denom * n.numer);
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
   rational_num r4{rational_num(3, 2)};
   rational_num r5{rational_num(5, 2)};
   rational_num r6{rational_num(-4, -2)};

   rational_num mul = r1 * r2;
   rational_num div = r4 / r5;

   std::cout << r1 << " " << r2 << " " << r3 << " ";
   std::cout << r4 << " " << r5 << " " << r6 << std::endl;

   std::cout << r1 << " * " << r2 << " = " << mul << std::endl;
   std::cout << r4 << " / " << r5 << " = " << div << std::endl;
}
