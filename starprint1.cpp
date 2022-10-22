//C++ program to display half star pyramid

#include <iostream>
using namespace std;

int main()
{
   int n, i, j;

   cout << "Enter number of rows: ";
   cin >> n;

   for(i = 1; i <= n; i++)
   {
      //print * equal to row number
      for(j = 1; j <= i; j++)
      {
         cout << "* ";
      }
      cout << "\n";
   }
   return 0;
}