/*
 *  title:       Simple Class
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 3, 2020
 *  description: Create a simple class called Rectangle that contains properties
 *               and methods describing its behavior.
 */

#include <iostream>

using namespace std;

class Rectangle
{
public:
   int width;
   int length;

   void setWidth(int w)
   {
      width = w > 0 ? w : 0;
   }

   void setLength(int l)
   {
      length = l > 0 ? l : 0;
   }

   int perimeter()
   {
      return 2 * (length + width);
   }

   int area()
   {
      return length * width;
   }
};

int main()
{
   // creating an object on the stack
   Rectangle r;
   r.setWidth(5);
   r.setLength(4);

   cout << "Perimeter: " << r.perimeter() << endl;
   cout << "     Area: " << r.area() << endl;

   // creating a pointer, which resides in stack memory, pointing to a
   // previously created object in the stack, only to demonstrate the arrow
   // dereferencing operator

   Rectangle *pr = &r;

   cout << "-----------------" << endl;
   cout << "  address of r: " << &r << endl;
   cout << " address of pr: " << &pr << endl;
   cout << "contents of pr: " << pr << endl;
   cout << "    pr->area(): " << pr->area() << endl;
   cout << "    &pr->width: " << &pr->width << endl;

   // redirecting a pointer to point to an area of heap memory containing a
   // Rectangle object

   pr = new Rectangle();
   pr->setLength(6);
   pr->setWidth(9);

   cout << "----------------" << endl;
   cout << " address of pr: " << &pr << endl;
   cout << "contents of pr: " << pr << endl;
   cout << "    pr->area(): " << pr->area() << endl;
   cout << "    &pr->width: " << &pr->width << endl;

   delete pr;
   pr = nullptr;

   return 0;
}
