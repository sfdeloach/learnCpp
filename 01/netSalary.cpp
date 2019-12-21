/*
 *  title:       Student Exercise #2
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        
 *  description: Write a program to calculate the net salary taking three inputs:
 *                 1) base salary
 *                 2) percentage of allowances
 *                 3) percentage of deductions
 */

#include <iostream>

using namespace std;

int main()
{
   double baseSalary, netSalary, allowance, deduction;

   cout << "Enter base salary: ";
   cin >> baseSalary;
   cout << "Enter allowance %: ";
   cin >> allowance;
   cout << "Enter deduction %: ";
   cin >> deduction;

   allowance /= 100.0;
   deduction /= 100.0;
   netSalary = baseSalary + (baseSalary * allowance) - (baseSalary * deduction);

   cout << "Net salary:        " << netSalary << endl;

   return 0;
}
