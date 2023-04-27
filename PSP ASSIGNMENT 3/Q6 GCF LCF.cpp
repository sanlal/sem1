#include<iostream>
using namespace std;
int main()
{
int a, b, x, y, temp, Gcf, lcm;
cout<<"\n Enter Two Numbers : \n";
cin>>x>>y;
a=x;
b=y;
while(b!=0)
{
temp=b;
b=a%b;
a=temp;
}
Gcf=a;
lcm=(x*y)/Gcf;
cout<<"\n HCF : "<<Gcf<<"\n";
cout<<"\n LCM : "<<lcm<<"\n";
return 0;
}
