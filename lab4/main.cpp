#include"Date.h"

int main()
{
  Date date1;
  int m,d,y;
  cout<<"Testing the default constructor and the getters"<<endl;
  cout<<"The initialized date is (M-D-Y):"<<date1.getMonth()<<"-"<<date1.getDay()<<"-"<<date1.getMonth()<<endl<<endl;

  cout<<"Please enter a date:(Month Day Year): ";
  cin>>m;
  date1.setMonth(m);
  cin>>d;
  date1.setDay(d);
  cin>>y;
  date1.setYear(y);
  cout<<"Please enter a second date:(Month Day year): ";
  cin>>m>>d>>y;
  Date date2(m,d,y);
  cout<<endl;
  cout<<"Printing the two days:"<<endl;
  date1.printAll();
 date2.printAll();
  if(date1.sameMonth(date2))
    {
      cout<<"The months are thesame"<<endl;
    }
      else
	{
	  cout<<"The months are different"<<endl;
	}
      return 0;
}
 
