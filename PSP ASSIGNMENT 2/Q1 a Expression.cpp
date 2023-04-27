/*Evaluate the following expressions:

(a) g = big / 2 + big * 4 / big - big + abc / 3 ;

(abc = 2.5, big = 2, assume g to be a float)
*/

#include<iostream>
using namespace std;
int main()
{
	int big=2;
	float g, abc=2.5;
    g = (big/2)+(big*(4/big))-big+(abc/3);
	cout<<g;
	return 0;
	}
