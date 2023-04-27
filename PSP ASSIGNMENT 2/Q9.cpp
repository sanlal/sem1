/*Write a program to accept a number and find sum of its individual digits
repeatedly till the result is a single digit. For example, if the given number is
4687 the output should be 7.
*/

#include<bits/stdc++.h>

using namespace std;

int digSum(int n)
{
	int sum = 0;
	
	while(n > 0 || sum > 9)
	{
		if(n == 0)
		{
			n = sum;
			sum = 0;
		}
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


int main()
{
	int n = 4687;
	cout << digSum(n);
	return 0;
}

