 
//Program to perform operations like addition, multiplication, etc. on matrix

	
	
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Please Enter the Number of Rows or Colume of Square Matrix : "<<endl;
	cin>>n;
	int arr1[10][10], arr2[10][10], arr3[10][10];
	int i, j, k;
	cout<<"Please Enter the Element of First Matrix : "<<endl;
	for (i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"arr1["<<i<<"]"<<"["<<j<<"] = ";
			cin>>arr1[i][j];
		}
	}
	cout<<"Please Enter the Element of Second Matrix : "<<endl;	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"arr2["<<i<<"]"<<"["<<j<<"] = ";
			cin>>arr2[i][j];
		}
	}
	cout<<"Sum of Above Two Matrix : "<<endl;
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
			cout<<arr1[i][j]+arr2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Multiplication of Above Two Matrix : "<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			arr3[i][j]=0;
			for(k=1;k<=n;k++){
			arr3[i][j]+=arr1[i][k]*arr2[k][j];	
			}
		}
	}
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
			cout<<arr3[i][j]<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
