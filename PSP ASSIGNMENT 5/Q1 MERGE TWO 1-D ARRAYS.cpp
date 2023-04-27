 //Q1)  Program to merge two 1-D arrays	
	
#include<iostream>
using namespace std;

int merge(char a[10],char b[10]){
	int i, d;
	char c[20];
	for(i=0;i<10;i++)
                   {
		if(a[i]!=0)
        {
		      c[d]=a[i];
   		      d++;
		}
	}
	for(i=0;i<10;i++) 
                   {
		if(b[i]!=0)
        {
			c[d]=b[i];
			d++;
		} 
	}	
	cout<<"Merged Array : "<<c;
	return 0;
}

int main(){
	char arr1[10],arr2[10];
	cout<<"Please Enter First Array : ";
	cin>>arr1;
	cout<<"Please Enter Second Array : ";
	cin>>arr2;
	merge(arr1,arr2);
	return 0;
}


