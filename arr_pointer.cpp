#include <iostream>
using namespace std;

int main()
{
   int element[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >>element[i];

   cout << "\nYou entered: ";
   for(int i = 0; i < 5; ++i)
      cout << *(element + i) <<endl;

   return 0;
}
