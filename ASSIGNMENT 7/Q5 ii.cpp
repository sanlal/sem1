/*
Q5-ii) Write a program in c++ to convert a decimal number into binary without using 
an array and using constructor and destructor
*/

//Using DESTRUCTOR
#include <iostream>
using namespace std;
class Decimal_Number
{
	public:
		Decimal_Number(int n)
		{
		int i=1,j=n, Binary_Number=0;
	     		cout<<" Please enter Decimal  number :";
				cin>>n;
				for(j=n;j>0;j=j/2)
				{
					Binary_Number=Binary_Number+(n%2)*i;
					i=i*10;
					n=n/2;
				}
				cout<<"binary number ="<<Binary_Number<<endl;
			}
			~Decimal_Number()
			{
				cout<<"Destructor run , FREE MEMORY "<<endl;
			}
		};
		int main()
		{
		   Decimal_Number obj(4);
		}
