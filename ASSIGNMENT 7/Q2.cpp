/*
Q2) i)Write a program that uses a class where the member functions are defined
outside a class
   ii)Try with local objects
*/
#include <iostream>
using namespace std;

void sum()
{
	class add // local object
	{
	public:
		int a,b;
		int method(int a,int b)
		{
			
			return a+b;
		}
	};
	

	add t;
	cout<<"Enter numbers";
	cin>>t.a>>t.b;
	cout<<"The sum is : "<<t.method(t.a,t.b);
}

int main()
{
	sum();
	return 0;
}

