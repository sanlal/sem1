#include<iostream>
using namespace std;
int main()
{
  char X;
  cout<<"Enter the Charater:  ";
  cin>>X;
  if(('a'==X)||('e'==X)||('i'==X)||('o'==X)||('u'==X)||('A'==X)||('E'==X)||('I'==X)||('O'==X)||('U'==X))
  {
  	cout<<"It is a VOWEL ";
  }
  else
  cout<<"It is NOT a Vowel";
  return 0;
}
