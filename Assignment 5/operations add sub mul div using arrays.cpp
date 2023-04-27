//Program to perform operation like addition
#include<iostream>
using namespace std;
int main()
{
	int array1[10],array2[10],i,j,size,add=0, mult=1;
	cout<<"Enter the size of array";
	cin>>size;
	
	cout<<"Enter 1st array elements:: ";
	for(int i=0;i<size;i++)
	{
		cin>>array1[i];
	}
	
	cout<<"Enter 2nd array elements:: ";
	for(int j=0;j<size;j++)
	{
		cin>>array2[j];
	}

	for(int i=0;i<size;i++)
	    for(int j=0;j<size;j++)
	    {
	    	add[i][j]=array1[]+array2[j];
	    }


}
