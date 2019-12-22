/*
 *  title:       Discounts
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Dec 22, 2019 
 *  description: Write a program to offer discounts on total bill amount
 */

#include <iostream>

using namespace std;

int main()
{
   double amount, discount;

   cout << "Subtotal:    $";
   cin >> amount;

   if (amount < 100)
   {
      discount = 0.0;
      cout << "No discount: $0.00" << endl;
   }
   else if (amount < 500)
   {
      discount = amount * 0.1;
      cout << "10% off:     $" << discount << endl;
   }
   else
   {
      discount = amount * 0.2;
      cout << "20% off:     $" << discount << endl;
   }

   cout << "Amount due:  $" << amount - discount << endl;

   return 0;
}
