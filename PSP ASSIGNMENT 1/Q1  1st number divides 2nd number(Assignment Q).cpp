/*
1) get two numbers from user and 
check first number divides the second exactly
*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Give two numbers: ";
	cin>>a>>b;
	if(b%a==0)
	{
		cout<<"Yes First number divides second number";
	}
	else
	{
		cout<<"No fist number not divides second number";
		
	}
	return 0;
}
