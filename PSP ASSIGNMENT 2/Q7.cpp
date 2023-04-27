/*
The mark price and discount is entered through keyboard. Sometimes seller
gets profit of x % or some time loss of y % depends on discount. Write a
program to determine whether the seller has made profit or incurred loss. Also
determine how much profit he made or loss incurred.
*/

#include<iostream>
using namespace std;
int main()
{
	int dis,mrp,cp,sp,loss,loss_percent,profit,profit_percent;
	cout<<"Enter discount,mrp and cost price: ";
	cin>>dis>>mrp>>cp;
	sp=mrp-dis;
	cout<<"selling price is ";
	if(cp>sp)
	{
		loss=cp-sp;
		loss_percent=(loss/cp)*100;
		cout<<"loss "<<loss<<"  and loss % is "<<loss_percent;
	}
	if(sp>cp)
	{
		profit=sp-cp;
		profit_percent=(profit/cp)*100;
		cout<<"profit "<<profit<<"  and profit % is "<<profit_percent;
	}
	return 0;
}
