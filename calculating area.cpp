#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Calculating area of circle
	float area,radius,pi,square;
	radius=2.2;
	pi=3.14;
	square= pow(radius,2);
	area=pi*square;
	cout<<"Area is "<<area<<endl;
}