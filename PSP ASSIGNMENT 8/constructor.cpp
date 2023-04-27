#include<iostream>
using namespace std;
class myclass
{
	public:
		myclass(int a=100,int b=10)
		{
			cout<<"This is"<<endl;
			cout<<a<<"\t"<<b<<endl;
		}
		
};
int main(){
	myclass o1();
//	myclass o2(78);
//	myclass o3(45,56);
	return 0;
}
