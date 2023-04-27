/*
3) get three numbers from user 
and find minimum and maximum among them
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers : ";
	cin>>a>>b>>c;
	
	if(a>=b&&a>=c)
	{
		cout<<"Max is: "<<a<<endl;
	}
	else if(b>=a&&b>=c)
	{
		cout<<"Max is: "<<b<<endl;
	}
	else
	{
		cout<<"Max is: "<<c<<endl;
	}
	
	
	if(a<=b&&a<=c)
	{
		cout<<"Min is: "<<a<<endl;
	}
	else if(b<=a&&b<=c)
	{
		cout<<"Min is: "<<b<<endl;
	}
	else
	{
		cout<<"Min is: "<<c<<endl;
	}
	
	if(a==b&&b==c)
	{
		cout<<"All are equal";
	}
	
}
