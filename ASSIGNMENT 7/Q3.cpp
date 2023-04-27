// C++ program without any compilation error to demonstrate
// that all the methods of Local classes must be defined
// inside the class only
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
	cin>>t.a>>t.b;
	cout<<t.method(t.a,t.b);
}

int main()
{
	sum();
	return 0;
}

