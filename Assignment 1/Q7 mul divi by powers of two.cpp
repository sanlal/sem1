//

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num_mul,num_div,num,power,i;
	
	cout<<endl<<"Enter number:::   "<<endl;
	cin>>num;
		cout<<endl<<"Enter power of two:::   "<<endl;
	cin>>power;
	
	
//USING BITWISE OPERATORS

		cout<<endl<<endl<<endl<<"*************************USING BITWISE OPERATORS****************************"<<endl<<endl<<endl;
		cout<<"Multiplication of "<<num<<" by 2 ^ "<<power<<" is "<<(num<<power)<<endl<<endl;
		cout<<"DIVISION OF "<<num<<" by 2 ^ "<<power<<" is "<<(num>>power)<<endl<<endl;
//WITHOUT USING BITWISE OPERATORS

         cout<<endl<<endl<<endl<<endl<<"************************WITHOUT USING BITWISE OPERATORS*********************************"<<endl<<endl;
         
         num_mul=num_div=num;
         for(i=0;i<power;i++)
         {
         	 num_mul= num_mul*2;
         	  num_div= num_div/2;
         }
         
        cout<<"Multiplication of "<<num<<" by 2 ^ "<<power<<" is "<<(num<<power)<<endl<<endl;
		cout<<"DIVISION OF "<<num<<" by 2 ^ "<<power<<" is "<<(num>>power)<<endl<<endl;
		
		return 0;

}
