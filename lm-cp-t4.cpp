#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float distance,angle,angleInRadian,height;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>>distance;
	cout<<"Enter the angle of elevetion (in degrees): ";
	cin>>angle;

	angleInRadian=angle/57.2958;
	height= distance*tan(angleInRadian);

	cout<<" The height of the tree is : "<<height;
	return 0;
}