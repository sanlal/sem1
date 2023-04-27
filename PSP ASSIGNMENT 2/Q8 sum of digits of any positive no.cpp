//Write a program to print the sum of digits of any positive number

#include<iostream>
using namespace std;
int main()
{

	
	int a,sum=0;
	cout<<"Enter a  value:   ";
	cin>>a;
	while(a!=0)
	{
		sum=sum+a%10;
		a=a/10;
	}

	
	cout<<"Sum is : "<<sum;
}
