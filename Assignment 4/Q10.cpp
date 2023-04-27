/* Given the coordinates (x, y) of a center of a circle and it’s radius,
 write a program which will determine whether a point lies inside the circle,
  on the circle or outside the circle.
  */
  
#include<iostream>
#include<cmath>  
using namespace std;
int main()
{
	float r,x,y;
	
	cout<<"Enter the radius of the circle : ";
	cin>>r;
	
	cout<<" Enter the x-y coordinates of the point for checking it's position : ";
	cin>>x>>y;
	
	if(r > sqrt(pow(x,2) + pow(y,2)))
		cout<<" The points lie inside the circle.";
	else if(r == sqrt(pow(x,2) + pow(y,2)))
		cout<<" The points lie on the circle.";
	else
		cout<<"The points lie outside the circle.";
		
	return 0;
}
