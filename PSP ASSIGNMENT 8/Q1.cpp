/* 1. Write a program to swap the values two integer members of different classes
using friend function.
*/


#include <iostream>

using namespace std;

class B;
class A
{
	int data;
	
	public:
		A(int n)
		{ 
		  data = n;
	    }
		friend void swap(A&, B&);
		void show_data()
		{ 
		  cout << "A =  " << data << endl; 
		}
};

class B
{
	int data;
	
	public:
		B(int n){ data = n; }
		friend void swap(A&, B&);
		void show_data(){ cout << "B = " << data << endl; }
};

void swap(A &a, B &b)
{
	int temp = a.data;
	a.data = b.data;
	b.data = temp;
}

int main()
{
	A a(10);
	B b(20);
	cout << "*********Before swapping..." << endl;
	a.show_data();
	b.show_data();
	swap(a, b);
	cout << "*********After swapping..." << endl;
	a.show_data();
	b.show_data();
	return 0;
}
