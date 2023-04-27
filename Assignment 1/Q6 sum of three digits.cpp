//Given a three digit number, add all digits and print the sum
//Particularly for THREE DIGIT NUMBER only

#include<iostream>
using namespace std;
int main()
{
	int a,m,n,x,y,sum,SUM;
	cout<<"Enter a  value:   ";
	cin>>a;
	
	m=a%10;
	n=a/10;
	sum=m+n;
	
	 
	x=sum%10;
	y=sum/10;
	SUM=x+y;
	
	
	
	cout<<"Sum is : "<<SUM;
}
