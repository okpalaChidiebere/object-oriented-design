#include "Cat.h"
#include <iostream>
using namespace std;

int main()
{
  Cat myCat;

   string colours[5];
   colours[0] = "brown";
   colours[1] = "";

  Cat averageCat(46, 24, 30, "green", "medium", colours);

  myCat.readCat();

   cout << "The average cat has height " << averageCat.getHeight() << endl;  

   cout << "-------------------------------------------------------"<< endl;
   cout << "This is myCat:" << endl;
  myCat.printCat();
   if (myCat.isTaller (averageCat))
   {
	cout << "My cat is taller than the average cat\n";
   }
   else
   {
	cout << "My cat is shorter than the average cat\n";
   }
   if (myCat.isCalico())
   {
	cout << "My cat is a calico\n";
   }
  
   return 0;
}
