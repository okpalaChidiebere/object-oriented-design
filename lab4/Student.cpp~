#include<iostream>
using namespace std;

class Student
{
private:
  string name;
  int id;
  int marks[3];
public:
  Student();
  Student(string,int);

  //getters
  string getName() const;
  int getId() const;
  int getMark(int) const;
  //setters are modifiers
  void setName(string);
  void setId(int);
  void setMarks(int,int);
}; 
//constructor are initializers. it has no return type
Student::Student()
{
  name="";
  id=0;
  for(int i=o;i<3;i++)
    {
      marks[i]=0;
    }
}
Student::Student(string n,int i)
{
  name=n;
  id=i;
}
string Student:: getName() const
  {
    return name;
  }
int Student::getId() const
{
  return id;
}

int Student::getMark(int index) const
{
  return marks[index];
}
  
void Student::setName(string n)
  {
    name=n;
  }
void Student::setId(int i)
  {
    id=i;
  }

void Student::setMarks(int index, int n)
{
  marks[index]=m;
}

int main()
{
  Student stu; //an instance
  stu.setName("Stuey");
  cout<<stu.getName()<<endl;

  stu.setId(200356606);
  cout<<stu.getId()<<endl;

  Student may("May",123454323); //we used the constructor with the arguements
cout<<stu.getName()<<endl;
 cout<<stu.getId()<<endl;

 return 0;
}
