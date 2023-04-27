/* Q3
program to find the sum of all the elements of an array using pointers
*/


#include<iostream>
using namespace std;

int Sum(int *p, int a){
	int j, sum = 0 ;
	
	for(j=0;j<a;j++){
			sum += *(p+j);
	}
	cout<<"Sum of All "<<a<<" Number = "<<sum;
	return 0;
}

int main(){
	int n, arr[10];
	int i;
	cout<<"How many integer you Want to Add : ";
	cin>>n;
	cout<<"Please Enter the numbers below : "<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}	
	Sum(arr,n);
	return 0;
}
