//Simple if-else program to check whether the given year is leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year::: ";
	cin>>year;
	
	if(year%4==0)
	{
	   if(year%100==0)
	   {
	      if(year%400==0)
		  	{
			  cout<<"The given is LEAP year";
			  }
		  else
			  cout<<"It is not a leap year";
		}
		else
		   cout<<"The given year is leap year";
	}
	else
	  cout<<"It is not a leap year";
}
