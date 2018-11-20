// File name: ~ftp/pub/class/170/ftp/cpp/Inheritance/Exercise.cpp
// Purpose:   Exercise for inheritance lab

#include <iostream>
#include <math.h> // for sqrt()
using namespace std;

class twoD
{
   protected:
      double x, y; // x and y  coordinates
   public: 
      // inline implementation of constructor
  twoD(){x = y = 0.0;cout<<"twoD default constructor\n";} // default constructor
  twoD(double i, double j):x(i), y(j){cout<<"twoD default constructor with two arguements";}
	
      // inline implementation of member functions
      void setX(double NewX){x = NewX;}
      void setY(double NewY){y = NewY;}
      double getX() const {return x;}
      double getY() const {return y;}
      // get distance of 2D points
      double getDistance (twoD point) const;
};

// calculate the distance  of two 2D points
double twoD::getDistance(twoD point) const
{
   double point1[2];
   double point2[2];
   double dx, dy;
   double distance;

   point1[0] = x;
   point1[1] = y;

   point2[0] = point.getX();
   point2[1] = point.getY();

   dx = point2[0] - point1[0];
   dy = point2[1] - point1[1];

   distance = sqrt(dx * dx + dy * dy); 
   return distance;
}

class threeD:public twoD
{
   private:
      double z;
   public: 

      // --->ADD CODE HERE<---:
      // Create a default inline constructor that reuses the constructor of
      // the twoD class.
      // YOUR CODE GOES HERE
  threeD(){z=0;}
      // --->ADD CODE HERE<---:
      // Create an inline constructor that initializes the 3D point
      // and reuses the twoD class.
      // YOUR CODE GOES HERE
  threeD(double x,double y, double w):twoD(x,y){z=w;}
      void setZ(double NewZ){z = NewZ;}
      double getZ() {return z;}

      // get distance for two 3D points
      double getDistance(threeD point) const;
};

// --->ADD CODE HERE<---:
// Overload the definition of getDistance() of twoD class so that it
// can calculate the distance between two 3D points
double threeD::getDistance(threeD point) const
{
   double point1[3];
   double point2[3];
   double dx, dy, dz;
   double distance;

   point1[0] = x;
   point1[1] = y;
   point1[2]=z;

   point2[0] = point.getX();
   point2[1] = point.getY();
   point2[2] = point.getZ();
    
   dx = point2[0] - point1[0];
   dy = point2[1] - point1[1];
   dz = point2[2] - point1[2];

   distance = sqrt(dx * dx + dy * dy + dz * dz); 
   return distance;

}

// --->ADD CODE HERE<---:
// Implement a main() function.
// You should ask the user for the xyz coordinates of two 3D points,
// and then calculate and print out the distance between these two points.
int main()
{
  threeD obj1;
  double x, y,z,distance;
  cout<<"This program asks for the coordinates of two points\n";
  cout<<"in 3D space and calculates their distance.\n";
  cout<<"Please enter the xyz coordinates for the first point\n";
  cin>>x>>y>>z;
  obj1.setX(x);
  obj1.setY(y);
  obj1.setZ(z);
 cout<<"Please enter the xyz coordinates for the second point\n";
 cin>>x>>y>>z;
 threeD obj2(x,y,z);
 cout<<endl;
 distance=obj1.getDistance(obj2);
 cout<<"Distance is: "<<distance<<endl;
   // YOUR CODE GOES HERE
 return 0;
}
