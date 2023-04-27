
/*Enter a 4 digit numbers through keyboard. 
Write a program to obtain the sum of 1st and last digits of this number
*/
#include<iostream>
using namespace std;
int main()
{
	//int a,m,n,x,y,sum,SUM;
	
	int a,sum=0;
	cout<<"Enter a four digit number :   ";
	cin>>a;
	
	sum=a / 1000 + a % 10;
	cout<<"Sum is : "<<sum;
}
