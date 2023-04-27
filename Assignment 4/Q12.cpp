/* Q12
	In a class there are n number of students – each studying m subjects. 
    Marks of each of the student in each of the subjects are to be read and class average
    in each subject and the average of total marks in all subjects to be computed.
	There is no need to store the values – No need to use arrays – Assume that m is 3 and
   use sentinel -100 to end inputs. Output marks in each subject and total obtained by each student 
   in a row and subject average and class average in the last row.
*/


#include<iostream>
using namespace std;

int Average(int, int);

int main(){
	int n, m;
	cout<<" Enter the Number of Students in class  : ";
	cin>>n;
	m=3;
//	cout<<"Please Enter the Number Subjects : ";
//	cin>>m;
	Average(n,m);
	return 0;
	
}

int Average(int a, int b){
	int i, j;
	float S1,S2,S3,sub1Sum=0,sub2Sum=0,sub3Sum=0;
	for(i=1;i<=a;i++){
		cout<<"Please Enter marks of Student- "<<i<<" in All "<<b<<" Subjects "<<endl;
		for(j=1;j<=b;j++){
			if(j==1){
				cin>>S1;
			sub1Sum += S1;
			}
			if(j==2){
				cin>>S2;
			sub2Sum += S2;
			}
			if(j==3){
				cin>>S3;
			sub3Sum += S3;
			}
		}
		cout<<"Average Of Student- "<<i<<" Marks ="<<(S1+S2+S3)/3<<endl<<endl;
	}
	cout<<"Average Of Subject-1 = "<<sub1Sum/a<<endl;
	cout<<"Average Of Subject-2 = "<<sub2Sum/a<<endl;
	cout<<"Average Of Subject-3 = "<<sub3Sum/a<<endl;
	cout<<"Average Of All Three Subjects = "<<(sub1Sum+sub2Sum+sub3Sum)/(3*a);
	return 0;
}

