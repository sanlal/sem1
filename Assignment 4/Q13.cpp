/* Q13
	Write a function to take a floating point number as input and returns the same number
 rounded to k decimal places. Do not use any system defined functions. 
If input is 17.24578, and k = 2, the output is 17.25 and 345.2034 is rounded as 345.20.
*/


#include<iostream>
using namespace std;

int main()
{
long double num,num1;
int n,i = 0,p = 1,numc;
cout << "Please enter a FLoating Number : ";
cin >> num;
cout << "Please enter the decimal places you want to print : ";
cin >> n; //17.6254
while(i <= n)
{
num *= 10; //17625.4
i++;
p *= 10; //1000
}
p/=10; // 100
numc = num; //17625
if(numc % 10 >= 5)
{
numc += (10-(numc % 10)); //17630
}
cout<<"Result after round off = ";
cout << (float)((float)(numc/10)/p);

}

