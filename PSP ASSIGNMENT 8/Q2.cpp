/*  
2. Write a program for addition of two complex numbers using friend function (use
constructor function to initialize data members of complex class).
*/


#include <iostream>

using namespace std;

class complex
{
	int real, img;
	
	public:	
		complex(int a, int b)
		{
			real = a;
			img = b;
		}
		
		friend complex add(complex, complex);
		
		void show()
		{
			cout << real << " + " << img << "i" << endl;
		}
};

complex add(complex c1, complex c2)
{
	return complex(c1.real + c2.real, c1.img + c2.img);
}

int main()
{
	complex c1(5, 2), c2(11, 8);
	c1.show();
	c2.show();
	cout << "sum is" << endl;
	add(c1, c2).show();
	return 0;
}
