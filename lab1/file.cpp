#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  const int array_size=5;

  float costs[array_size];
  float tax[array_size];
  char answer;

  float sumOFcost;
  float sumOFtax;
  cout<<fixed<<showpoint<<setprecision(2);
  for(int i=0;i<5;i++)
    {
      cout<<"cost? ";
      cin>>costs[i];
      cout<<"tax? (y/n)";
      cin>>answer;
      if(answer=='y')
	{
	  tax[i] = costs[i]*10/100;
	}
    }
  for(int i=0;i<5;i++)
    {
      sumOFcost+=costs[i];
      sumOFtax+=tax[i];
    }
  cout<<"For your review, here are your values:"<<endl;
  cout<<setw(7)<<"Cost"<<setw(11)<<"Tax"<<endl;
  for(int i=0;i<5;i++)
    {
      cout<<setw(7)<<costs[i]<<setw(11)<<tax[i]<<endl;
    }
  cout<<"  ----------------"<<endl;
  cout<<setw(7)<<sumOFcost<<setw(11)<<sumOFtax<<endl;
  cout<<"Your bill is:   "<<sumOFtax+sumOFcost<<endl;

    return 0;
}
