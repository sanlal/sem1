//Q5 Program to Compare Two Strings

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i;
	string str1, str2;
	cout<<"Please Enter First String : ";
	cin>>str1;
	cout<<"Please Enter Second String : ";
	cin>>str2;
	if(str1.length()==str2.length()){
		for(i=1;i<=str1.length();i++){
			if(str1[i]==str2[i]){
				if(i==str1.length()){
					cout<<"String 1 is Equal to String 2 ";
				}
							continue;
			}
			else{
				cout<<"String 1 is Not Equal to String 2 ";
				break;
			}
		}
	}
	else{
		cout<<"String 1 is Not Equal to String 2 ";
	}
}
