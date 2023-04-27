//Q8  program to read a sentence and count the number of characters &words in that sentence 


#include<iostream>
using namespace std;

int main(){
	int i, word=1;
	string str;
	cout<<"Please Enter the Sentence : ";
	getline(cin,str);
//	cout<<str.length();
	for(i=0;i<str.length();i++){
		if(str[i]==' '){
			if(str[i+1]!=' ')
			word++;
		}
	}
	cout<<"Number of Word in the sentence : "<<word<<endl;
	cout<<"Number of Letter in the sentence : "<<str.length()-word+1;
	return 0;
}
