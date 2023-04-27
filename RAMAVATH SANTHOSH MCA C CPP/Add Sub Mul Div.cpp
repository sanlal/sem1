//My Basic Add,Sub,Division,Multiplication
#include<iostream>
using namespace std;
int main()
{
	unsigned int a,b,c;
	
	cout<<"Enter two numbers: ";
	
	cin>>a>>b;
	
	c=a+b; //Addition
	cout<<"Addition of two numbers is: "<<c<<'\n';
	cout<<"\n";
	
	c=a-b;//Subtraction
	cout<<"Subtraction of two numbers is : "<<c<<'\n';
	cout<<"\n";
	
	c=a*b;//Multiplication
	cout<<"Multiplication of two numbers is: "<<c<<'\n';
	cout<<"\n";
	
	c=a/b;//Division
	cout<<"Division of two numbers is: "<<c<<'\n';
	
	return 0;
}
