/*

(b) on = ink * act / 2 + 3 / 2 * act + 2 + tig ;
(ink = 4, act = 1, tig = 3.2, assume on to be an int)
*/

#include<iostream>
using namespace std;
int main()
{
	int on;
	float ink=4,act=1,tig=3.2;
	 on = ink * (act / 2 )+ ((3 / 2)* act)+ 2 + tig ;
	 cout<<on;
	 return 0;
	
}
