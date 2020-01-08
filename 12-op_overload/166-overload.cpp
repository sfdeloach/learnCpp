/*
 *  title:       Operator Overloading
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 7, 2020
 *  description: Create a class that defines a complex number object. Create
 *               operator overloading for adding, subtracting, multiplication,
 *               and division. Also overload the insertion (<<) operator. Use it
 *               to demonstrate the operations of the class.
 */

#include <iostream>
#include <cmath>

using namespace std;

class complex
{
private:
   double real;
   double imaginary;

public:
   complex(double r = 0.0, double i = 0.0)
   {
      real = r;
      imaginary = i;
   }

   complex(complex &c)
   {
      real = c.real;
      imaginary = c.imaginary;
   }

   ~complex() {}

   complex operator+(complex &c);
   complex operator-(complex &c);
   complex operator*(complex &c);
   complex operator/(complex &c);
   bool operator==(complex &c);

   friend ostream &operator<<(ostream &out, complex &c);
};

complex complex::operator+(complex &c)
{
   return complex(real + c.real, imaginary + c.imaginary);
}

complex complex::operator-(complex &c)
{
   return complex(real - c.real, imaginary - c.imaginary);
}

complex complex::operator*(complex &c)
{
   double r = (real * c.real) - (imaginary * c.imaginary);
   double i = (real * c.imaginary) + (imaginary * c.real);
   return complex(r, i);
}

complex complex::operator/(complex &c)
{
   double r = (real * c.real) + (imaginary * c.imaginary);
   double i = (imaginary * c.real) - (real * c.imaginary);
   double denominator = pow(c.real, 2) + pow(c.imaginary, 2);
   return complex(r / denominator, i / denominator);
}

bool complex::operator==(complex &c)
{
   double const epsilon = 0.0001;
   if (abs(real - c.real) < epsilon && abs(imaginary - c.imaginary) < epsilon)
   {
      return true;
   }
   return false;
}

ostream &operator<<(ostream &out, complex &c)
{
   char sign = c.imaginary >= 0.0 ? '+' : '-';
   out << '(' << c.real << ' ' << sign << ' ' << abs(c.imaginary) << "i)";
   return out;
}

int main()
{
   complex c1{complex(-22, 7)};
   complex c2{complex(3, -4)};
   complex c3{complex(9, 5)};
   complex c4{complex(4, 7)};
   complex c5{complex(3, 2)};
   complex c6{complex(5, 6)};
   complex c7{complex(4, -5)};

   complex add = c1 + c2;
   complex sub = c3 - c4;
   complex mul = c5 * c6;
   complex div = c5 / c7;
   bool compare1 = c1 == c1;
   bool compare2 = c1 == c2;

   cout << "*** Overloading Operators ***" << endl
        << c1 << " + " << c2 << " = " << add << endl
        << c3 << " - " << c4 << " = " << sub << endl
        << c5 << " * " << c6 << " = " << mul << endl
        << c5 << " / " << c7 << " = " << div << endl
        << c1 << " == " << c1 << "? " << compare1 << endl
        << c1 << " == " << c2 << "? " << compare2 << endl;

   return 0;
}
