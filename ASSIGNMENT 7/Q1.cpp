/*
Q1) Write a program that uses a class where the member functions are defined
outside a class
*/
#include<iostream>
using namespace std;
class add
{
	public:
		int a,b;
		int sum(int a,int b);
};

int add::sum(int a, int b)
{
	return a+b;
}


int main()
{
	add obj;
	cout<<"enter numbers ::";
	cin>>obj.a>>obj.b;

	cout<<"Sum of two number is : "<<	obj.sum(obj.a,obj.b);
}
