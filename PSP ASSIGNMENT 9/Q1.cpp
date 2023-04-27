#include <iostream>
#include <cmath>

using namespace std;

class pointType
{
protected:
	int x, y;
public:
	
	pointType(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	

	
	int distanceFromXAxis(){ return y; }
	int distanceFromYAxis(){ return x; }
	int getX(){ return x; }
	int getY(){ return y; }
	
	void set(int _x, int _y)
	{
		x = _x;
		y = _y;
	}
	
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
	
		double distanceFromOrigin()
	{
		return sqrt(x*x + y*y);
	}
};

int main()
{
	pointType p(-5, 5);
	cout << "***The point is: ";
	p.display();
	cout << "****Distance from X Axis: " << p.distanceFromXAxis() << endl<<endl;
	cout << "****Distance from Y Axis: " << p.distanceFromYAxis() << endl<<endl;
	cout << "*******Distance from origin: " << p.distanceFromOrigin() << endl<<endl;

	return 0;
}
