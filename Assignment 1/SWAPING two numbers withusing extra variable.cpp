//SWAPING TWO NUMBERS USING EXTRA VARIABLE
#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
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
