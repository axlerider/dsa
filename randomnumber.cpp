#include <cstdlib>
#include <iostream>
using namespace std;
  
int main()
{
    // This program will create same sequence of
    // random numbers on every program run
    for (int i = 0; i < 5; i++)
        cout << rand() << " ";
  
    return 0;
}