//Sum of squares

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Your favorite Number::: ";
	cin>>n;
    while(i<=n)
	{
		sum=sum+i*i;
		i++;
	}
	cout<<sum;
}
