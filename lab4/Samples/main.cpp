#include "Student.h"

int main ()
{
   Student stu;  //calls default constructor
   string inName;
   int inId;
   int i;


   cout << "********************************"<<endl;
   cout << "View stu after default constructor" << endl;
   stu.printAll();
   cout << endl;

   //Use setters to reset the values
   cout << "Your name, please: ";
   getline(cin, inName, '\n');   // input a string
   stu.setName (inName);
   cout << "Your id, please: ";
   cin >> inId;
   stu.setId (inId);
   stu.setMark (89,92,68);

   cout << endl;
   cout << "********************************"<<endl;
   cout << "View stu after setters" << endl;
   stu.printAll();
 
   cout << endl;
   cout << "********************************"<<endl;
   cout << "Testing other constructor" << endl;

   Student tom ("Tom", 99, 55, 32, 68);  //calls second constructor
   //notice using getters to print
   cout << "Hello, " << tom.getName() << endl; 
   cout << "Your Student ID is " << tom.getId() << endl;
   cout << "Your marks are: " << endl;
   for (int i=0; i < 3; i++) 
   {
      cout << "Test " << i+1 << ": " << tom.getMark(i) << " " << endl;
   }
}

