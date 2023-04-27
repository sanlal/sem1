/*5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/
//Perimeter= 2(length+breadth)          Area=Length*Breadth
#include<stdio.h>
#include<math.h>
int main()
{
	int height=7,width=5,perimeter,area;
	perimeter=2*height+2*width;
	area=height*width;
	printf("Perimerter of the rectangle = %d\tinches\n");
	printf("Area of the rectangle = %d\tsquare inches");
}
