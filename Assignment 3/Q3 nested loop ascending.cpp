//Nested if-else,(program for displaying three inputted numbers in ascending order)
#include <iostream>

using namespace std;
int main ()
{
    int num1, num2, num3;
    int smallest, middle, biggest;
    cout<<" Enter three numbers ::: ";
    cin >> num1 >> num2 >> num3;
    
    if ((num1 <= num2) && (num1 <= num3))
    {
    	{
    		if(num2<=num3)
    		{
			cout<<num1<<'\t'<<num2<<'\t'<<num3;
			}
			else
		      cout<<num1<<'\t'<<num3<<'\t'<<num2;
		}
    }
	else  
	    if ((num2 <= num1) && (num2 <= num3))
        {
    	  {
    		if(num1<=num3)
    		{
			cout<<num2<<'\t'<<num1<<'\t'<<num3;
			}
			else
			cout<<num2<<'\t'<<num3<<'\t'<<num1;
	    	}
        }
     else 
	  if ((num3 <= num1) && (num3 <= num2))
      {
    	 {
    		if(num1<=num2)
    		{
			cout<<num3<<'\t'<<num1<<'\t'<<num2;
			}
			else
			cout<<num3<<'\t'<<num2<<'\t'<<num1;
		  }
       }
    else
        cout<<" ";
    

    return 0;
}
