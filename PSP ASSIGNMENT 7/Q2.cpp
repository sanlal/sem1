/*
Q2  Try with local and global objects (with same program Q1)
*/
#include <iostream>
using namespace std;
class Example
{
    private:
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



Example obj; // global object
int main()
{
   //create object
   Example Ex; //local obj
   cout << "\nBy using LOCAL OBJECT"<<endl;
   Ex.init_val(999);
   Ex.print_val();
   cout << "\nBy using GLOBAL OBJECT"<<endl;
   obj.init_val(785);
   obj.print_val();
   return 0;
}

