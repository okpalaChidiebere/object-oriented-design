#include "myFunction.h"

int main()
{
  int array1[R_SIZE][C_SIZE];
  int array2[R_SIZE][C_SIZE];
  int array3[R_SIZE][C_SIZE];

  cout<<"Please enter the values for Array 1 (4 X 5): ";
  readArray(array1,4);
  cout<<"Please enter the values for Array 2 (4 X 5): ";
  readArray(array2,4);
  sumArray(array1,array2,array3,4);
  cout<<"The sum is:"<<endl;
  printArray(array3,4);

  return 0;
}
