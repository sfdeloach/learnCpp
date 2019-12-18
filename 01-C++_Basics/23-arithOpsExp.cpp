#include <iostream>

using namespace std;

int main()
{

   int a{3}, b{7};

   float c{(float)b / a};
   float d{b / a}; // will cause a warning during compilation

   cout << "c = " << c << endl; // c = 2.33333
   cout << "d = " << d << endl; // d = 2

   return 0;
}
