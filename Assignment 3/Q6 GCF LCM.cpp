//Program to compute GCF and LCM of two numbersusing while loop
#include<iostream> 
using namespace std; 
int main() 
{         
int num1,num2, x, y, temp, GCF, LCM;        
 cout<<"\n Enter Two Numbers : \n";         
 cin>>x>>y;         
 num1=x;         
 num2=y;         
 while(num2!=0)         
 {                 
 temp=num2;                
  num2=num1%num2;                
   num1=temp;        
    }         
	GCF=num1;        
	LCM=(x*y)/GCF;         
	cout<<"\n GCF : "<<GCF<<endl;         
	cout<<"\n LCM : "<<LCM<<endl;         
	return 0; } 
