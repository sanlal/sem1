/*
Q1  Write a program that uses a class where the member functions are defined outside a
class.
*/
#include <iostream>
using namespace std;
class Example
{
    
	int val;
	public:
	//function declarations
	void init_val(int v);
	void print_val();
};
//function definitions
void Example::init_val(int v)
{
    val=v;
}
void Example::print_val()
{
	cout<<"----------------------------------\n";
    cout<<"The value is : "<<val<<endl;
    cout<<"----------------------------------\n";
}
int main()
{
    //create object
	Example Ex;
	Ex.init_val(100);
	Ex.print_val();
	return 0;
}
