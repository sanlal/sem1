//Given a three digit number, add all digits and print the sum

#include<iostream>
using namespace std;
int main()
{
	//int a,m,n,x,y,sum,SUM;
	
	int a,sum=0;
	cout<<"Enter a  value:   ";
	cin>>a;
	while(a!=0)
	{
		sum=sum+a%10;
		a=a/10;
	}
/*for particular three digit number
	m=a%10;
	n=a/10;
	sum=m+n;
	
	 
	x=sum%10;
	y=sum/10;
	SUM=x+y;
	*/	
	
	cout<<"Sum is : "<<sum;
}
