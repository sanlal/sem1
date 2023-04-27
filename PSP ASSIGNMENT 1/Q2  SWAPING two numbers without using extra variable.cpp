//2) swap two numbers without using extra variable

#include<iostream>
using namespace std;

void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"Number after swapping: a = "<< a << " b = "<< b<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<"Number before swapping: a = "<< x << " b = "<< y<<endl;
	swap(x,y);
	
}
