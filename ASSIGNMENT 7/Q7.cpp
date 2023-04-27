/*
Q7) Let's see the c++ program to show the Sum of n numbers of odd natural
numbers by using the different type of constructors
*/
#include<iostream>
using namespace std;
class Sum_Constructor_Overloading
{
	private :
		int i,n,number1 ,number2;
	public	:
		Sum_Constructor_Overloading(int a)
		{
			n=a;
			int sum=0;
			for(int i=1;i<=n;i++)
			{
				cout<<"The output is:"<<endl;
				cout<<2*i-1<<" ";
				sum=sum+(2*i-1);
				cout<<endl;
			}
			cout<<"The sum of the given input  = "<<sum<<endl;
		}
		
		Sum_Constructor_Overloading(int two,int  three)
		{
			cout<<"For 1st Input Answer is Given below"<<endl;
			number1 =two;
			int sum1=0;
			for(int i=1;i<=number1 ;i++)
			{
				cout<<"The output  is:";
				cout<<2*i-1<<" ";
				sum1=sum1+(2*i-1);
				cout<<endl;
			}
			cout<<"The sum of the given input  = "<<sum1<<endl;
			cout<<endl;
			cout<<"For 2nd Input Answer is Given below."<<endl;
			number2=three;
			int sum2=0;
			for(int i=1;i<=number2;i++)
			{
				cout<<"The output   is:";
				cout<<2*i-1<<" ";
				sum2=sum2+(2*i-1);
				cout<<endl;
			}
			cout<<"The sum of the given input  = "<<sum2<<endl;
		}
};
int main()
{
	int option;
	cout<<"Enter 1 of Single parameter constructor."<<endl;
	cout<<"Enter 2 For Multiple Paramter constucor."<<endl;
	cout<<"Input 1 or 2 here : "<<endl;
	cin>>option;
	system("cls");
	if(option ==1)
	{
		cout<<"You Have Slected Single Paramater"<<endl;
		cout<<"Constructor"<<endl;
		int n;
		cout<<"enter the value : To print Odd Number"<<endl;
		cin>>n;
		Sum_Constructor_Overloading a(n);
	}
	else if(option==2)
	{
		cout<<"You Have slected Multiple Paramater"<<endl;
		cout<<"Constructor"<<endl;
		int two,three;
		cout<<"enter the 1st value : To print Odd Number"<<endl;
		cin>>two;
		cout<<"enter the 2nd value : To print Odd Number"<<endl;
		cin>>three;
		Sum_Constructor_Overloading(two,three);
	}
	else
	cout<<"Wrong Input ";
}
