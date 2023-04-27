/*
Q3  Try with different constructors and definition inside &amp; outside of the class (with same
program Q1)
*/
#include <iostream>
using namespace std;
class Example
{
    private:
    int val;
	public:
	//constructor declarations
	Example()
	{
	val = 0;
	}
	Example(int);
	void print_val();
 };
    //constructor definitions
Example :: Example(int v)
{
   val=v;
}
void Example::print_val()
{
    cout<<"----------------------------------\n";
    cout<<"The value is : "<<val<<endl;
    cout<<"----------------------------------\n";
}

Example obj; // global object
int main()
{
   //create object
   cout << "\nParameterized constructor"<<endl;
   Example Ex(99); //local obj
   Ex.print_val();
   cout << "\nDefault Constructor"<<endl;
   Example obj;
   obj.print_val();
   return 0;
}
