/*  If a four-digit number is input through the keyboard, 
write a program to obtain the sum of the first and last digit of this number.
*/
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	cout<<"Enter a 4 digit no :   ";
	cin>>num;
	
	sum=num / 1000 + num % 10; //with num%10 we get last digit
	                           //with num/1000 we get first digit
	cout<<"Sum is : "<<sum;
}
