// Hoppock, Zachary
// minAndMax.cpp
// November 14, 2020
// Locate the minimum and maximum values in a array at the same time
// Version #1

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));

  const int SIZE = 10;
  int values[SIZE];
  
  cout << "Array:  ";
  for (int i = 0; i < SIZE; i++)
  {
    values[i] = rand() % 100 + 1;
    cout << values[i];
    if (i < SIZE - 1)
    {
      cout << ", ";
    }
  }
  cout << endl;

  int largest = values[0];
  int smallest = values[0];
  for (int i = 0; i < SIZE; i++)
  {
   if (values[i] > largest)
   {
      largest = values[i]; 
   }
   if (values[i] < smallest)
   {
      smallest = values[i];
   }
  }
  cout << "Maximum = " << largest << endl;
  cout << "Minimum = " << smallest;

  return 0;
}