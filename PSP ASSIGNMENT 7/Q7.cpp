/*
Q7) Let’s see the C++ program to show the Sum of n number of odd natural numbers by
using the different type of constructors.
*/
#include<iostream>
using namespace std;
class Sum_Constructor
{
private :
int i,n,num1 ,num2;
public :
Sum_Constructor(int a)
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
cout<<"The sum of the given input = "<<sum<<endl;
}
Sum_Constructor(int a,int b)
{
cout<<"For 1st Input Answer is Given below"<<endl;
num1 = a;
int sum1=0;
for(int i=1;i<=num1 ;i++)
{
cout<<"The output is:";
cout<<2*i-1<<" ";
sum1=sum1+(2*i-1);
cout<<endl;
}
cout<<"The sum of the given input = "<<sum1<<endl;
cout<<endl;
cout<<"For 2nd Input Answer is Given below."<<endl;
num2=b;
int sum2=0;
for(int i=1;i<=num2;i++)
{
cout<<"The output is:";
cout<<2*i-1<<" ";
sum2=sum2+(2*i-1);
cout<<endl;
}
cout<<"The sum of the given input = "<<sum2<<endl;
}
};
int main()
{
int ch;
cout<<"Enter 1 of Single parameter constructor."<<endl;
cout<<"Enter 2 For Multiple Paramter constucor."<<endl;
cout<<"Input 1 or 2 here : "<<endl;
cin>>ch;
system("cls");
if(ch == 1)
{
cout<<"You Have Slected Single Paramater"<<endl;
cout<<"Constructor"<<endl;
int n;
cout<<"enter the value : To print Odd Number"<<endl;
cin>>n;
Sum_Constructor a(n);
}
else if(ch == 2)
{
cout<<"You Have slected Multiple Paramater"<<endl;
cout<<"Constructor"<<endl;
int a,b;
cout<<"enter the 1st value : To print Odd Number"<<endl;
cin>>a;
cout<<"enter the 2nd value : To print Odd Number"<<endl;
cin>>b;
Sum_Constructor obj(a,b);
}
else
cout<<"Wrong Input ";
}
