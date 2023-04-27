#include<iostream>
using namespace std;
int main()
{
	int n;
	bool x=1,y=0;
	
	cout<<"Give the number to check even or odd using boolean expression:::: ";
	cin>>n;
	
	if(n%2==0)
	{
		cout<<x<<"  means the given number is EVEN";   //x=1 means it is even
	}
	else
	cout<<y<<"   means the given number is ODD";       //y=0 means it is odd
	//return 0;
	
}


