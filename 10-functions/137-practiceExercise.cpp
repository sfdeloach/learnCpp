/*
 *  title:       Practice Exercise #8
 *  author:      Steven DeLoach (sfdeloach@gmail.com)
 *  date:        Jan 1, 2020
 *  description: Write a program that performs a linear and binary search on an
 *               array. Print the number of iterations required to find the
 *               element
 */

#include <iostream>

using namespace std;

int SIZE = 1000;
int LINEAR_SEARCH_ITERS = 0;
int BINARY_SEARCH_ITERS = 0;

template <class T>
int binarySearch(T *array, int size, T search)
{
   int result = -1;
   int high = size - 1, low = 0, mid;

   while (high >= low)
   {
      ++BINARY_SEARCH_ITERS;

      mid = (high + low) / 2;

      if (*(array + mid) == search)
      {
         result = mid;
         break;
      }
      else if (*(array + mid) < search)
      {
         low = mid + 1;
      }
      else
      {
         high = mid - 1;
      }
   }

   return result;
}

template <class T>
int linearSearch(T *array, int size, T search)
{
   int result = -1;

   for (auto i = 0; i < size; ++i)
   {
      ++LINEAR_SEARCH_ITERS;
      if (*(array + i) == search)
      {
         result = i;
         break;
      }
      if (*(array + i) > search)
         break;
   }

   return result;
}

int *createArray(int size)
{
   int *array = new int[size];
   for (auto i = 0; i < size; ++i)
   {
      array[i] = i * 2;
   }
   return array;
}

int main()
{
   int *array = createArray(SIZE);
   int search;

   cout << "*** Search ***" << endl
        << "Enter a number: ";
   cin >> search;

   cout << "        linear: " << linearSearch(array, SIZE, search) << endl;
   cout << "  linear iters: " << LINEAR_SEARCH_ITERS << endl;

   cout << "        binary: " << binarySearch(array, SIZE, search) << endl;
   cout << "  binary iters: " << BINARY_SEARCH_ITERS << endl;

   delete[] array;
   array = nullptr;

   return 0;
}
