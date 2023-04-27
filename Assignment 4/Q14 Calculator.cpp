/* Q14
	Use functions to write a program to implement integer calculator with functions 
	add, subtract, multiply, quotient, modulus, exponent. 
	Provide proper user interface.
	*/


#include<iostream>
#include<math.h>
using namespace std;

void add();
void subtract();
void multiply();
void quotient();
void modulus1();
void exponent();

int num1, num2;


int main(){
	char operation;
	cout<<"Please Choose which operation you want to Perform : "<<endl;
	cout<<"\t\t|Enter + to perform Addition            |"<<endl;
	cout<<"\t\t|Enter - to perform Subtraction         |"<<endl;
	cout<<"\t\t|Enter * to perform Multiplication      |"<<endl;
	cout<<"\t\t|Enter / to perform Division            |"<<endl;
	cout<<"\t\t|Enter % to perform Modulus             |"<<endl;
	cout<<"\t\t|Enter ^ to perform Exponent            |"<<endl;
	
	m:
	cout<<"\n\n\t\tPlease Enter the Operation You want to Perform : ";
	
	cin>>operation;
	
	switch(operation){
		case '+': 
			{
				add();
				break;
			}
		case '-':
			{
				subtract();
				break;
			}
		case '*':
			{
				multiply();
				break;
			}
		case '/':
			{
				quotient();
				break;
			}
		case '%':
			{
				modulus1();
				break;
			}
		case '^':
			{
				exponent();
				break;
			}
		default :
			{
				cout<<"\n\t\tPlease Enter the Valid Operation "<<endl;
				goto m;
			}
	}
	return 0;
}

void add(){
	cout<<"\t\tPlease Enter the First Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Second Number : ";
	cin>>num2;
	cout<<"\t\tSum of First and Second Number : "<<num1+num2;	
}

void subtract(){
	cout<<"\t\tPlease Enter the First Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Second Number : ";
	cin>>num2;
	cout<<"\t\tDifference of First and Second Number : "<<num1-num2;
}

void multiply(){
	cout<<"\t\tPlease Enter the First Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Second Number : ";
	cin>>num2;
	cout<<"\t\tProduct of First and Second Number : "<<num1*num2;
}

void quotient(){
	cout<<"\t\tPlease Enter the First Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Second Number : ";
	cin>>num2;
	cout<<"\t\tDivision of First and Second Number : "<<num1/num2;
}

void modulus1(){
	cout<<"\t\tPlease Enter the First Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Second Number : ";
	cin>>num2;
	cout<<"\t\tModulus of First and Second Number : "<<num1%num2;
}

void exponent(){
	cout<<"\t\tPlease Enter the Number : ";
	cin>>num1;
	cout<<"\t\tPlease Enter the Exponent : ";
	cin>>num2;
	cout<<"\t\tResult of "<<num1<<"^"<<num2<<" is : "<<pow(num1,num2);
}

