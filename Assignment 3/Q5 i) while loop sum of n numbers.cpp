//while loop.Program to compute i) the sum of n natural numbers

#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0,n;
	cout<<"enter number ::: ";
	cin>>n;
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<sum;
	//cout<<sum;
}
