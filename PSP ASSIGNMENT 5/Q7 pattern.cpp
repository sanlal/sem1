/* Q7
program to print the following pattern
U N 
U N I V 
U N I V E R 
U N I V E R S I
U N I V E R S I T Y 
U N I V E R S I 
U N I V E R
U N I V
U N
*/


#include<iostream>
using namespace std;

int Pattern(string a){
	int i, j;
	cout<<"Required Pattern : "<<endl;
	for(i=0;i<=10;i=i+2){
		
			for(j=0;j<i;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	for(i=8;i>=0;i=i-2){
		for(j=0;j<i;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int main(){
	string str;
	str = "UNIVERSITY";
	Pattern(str);
	return 0;
	
}
