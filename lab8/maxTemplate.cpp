/****************************************************
 *
 *  FileName:    /net/data/ftp/pub/class/170/ftp/cpp/maxTemplate.cpp
 *  Purpose:     Demonstrate the use of function templates
 *
 ********************************************************/
#include <iostream>
#include <string>
using namespace std;

template<typename T>//Make a template out of the prototype
T myMax(T one, T two);

int main()
{
  int i_one = 3, i_two = 5;

   cout << "The max of " << i_one << " and " << i_two << " is "
	<< myMax(i_one, i_two) << endl;

   //Test your template on float and string types
 float f1 = 5.6, f2= 7.3;

   cout << "The max of " << f1<< " and " << f2<< " is "
	<< myMax(f1, f2) << endl;

   string s1="donkey", s2="apple";

   cout << "The max of " << s1<< " and " << s2<< " is "
	<< myMax(s1, s2) << endl;	
   return 0;
}


template<typename T>//Make a template out of this function. Don't forget the return type.
T myMax(T one, T two)
{
   T bigger;
   if (one < two)
   {
      bigger = two;
   }
   else
   {
      bigger = one;
   }
   return bigger;
}
