#include <iostream>

/**
 * Simple program demonstrating the difference between cin and getline
 */

int main()
{
   // std::cin acts like java's next, nextInt, nextDouble, etc. It will only store a token delimited
   // by white space (new lines, tabs, and spaces).
   //
   // std::getline() acts like java's nextLine()

   int i, j;
   float f;
   double d;
   long l;
   std::string s; // notice string type is in namespace std

   std::cout << "Enter two integers: ";
   std::cin >> i >> j; // notice how two variables can be read by cin
   std::cout << "You entered " << i << " and " << j << std::endl;

   std::cout << "Enter a float: ";
   std::cin >> f;
   std::cout << "You entered " << f << std::endl;

   std::cout << "Enter a double: ";
   std::cin >> d;
   std::cout << "You entered " << d << std::endl;

   std::cout << "Enter a long: ";
   std::cin >> l;
   std::cout << "You entered " << l << std::endl;

   std::cout << "Enter a string (token): ";
   std::cin >> s; // notice white spaces end the input
   std::cout << "You entered \"" << s << "\"" << std::endl;

   // clear keyboard buffer
   std::getline(std::cin, s);

   std::cout << "Enter a string (line): ";
   std::getline(std::cin, s);
   std::cout << "You entered \"" << s << "\"" << std::endl;

   return 0;
}
 