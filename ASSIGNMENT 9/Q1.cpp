#include <iostream>
#include <cmath>

using namespace std;

class pointType //CLASS WITH NAME pointType
{
    protected:
	int x, y;
    public:	
	pointType(int x, int y){
		this->x = x;
		this->y = y;
	}
	
	int distance_From_X_Axis(){ return y; }
	int distance_From_Y_Axis(){ return x;}
	
/*	void set(int x, int y){ this->x = x;   this->y = y;}
	
	int getX(){ return x; }
	int getY(){ return y;}
	*/
	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
	
	double distance_From_Origin() //operation on points
	{
		return sqrt(x*x + y*y);
	}

    double operation(){
    	return ((x-y)*(x-y));
    }
};

int main()
{
	pointType p(5,2 );
	cout << "The point is: ";
	p.display(); //point in the x-y plane
	cout << "Distance from X Axis: " << p.distance_From_X_Axis() << endl;
	cout << "Distance from Y Axis: " << p.distance_From_Y_Axis() << endl;
	
	cout << "Distance from origin: " << p.distance_From_Origin() << endl;
	cout << "Operation solution: "<<p.operation()<<endl;
	return 0;
}
