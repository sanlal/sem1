/*
Q5) Write a program in C++ to convert a decimal number into binary without using an
array and using the constructor and destructor.
*/
#include <iostream>
using namespace std;
class dec_to_bin
{
    public:
    dec_to_bin()
	{
	int p=1,bin=0,n;
	cout<<"Enter Decimal number : "<<endl;
	cin>>n;
	while(n)
	{
	bin += (n%2)*p;
	p=p*10;
	n=n/2;
	}
	cout<<"Binary number = "<< bin;
	}
	~dec_to_bin()
	{
	cout << "\nThe Decimal number is Converted Binary "<<endl;
	}
};
int main()
{
    dec_to_bin obj;
    return 0;
}
