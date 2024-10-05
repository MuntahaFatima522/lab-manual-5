#include<iostream>
#include<cmath>
using namespace std;

void disc1(float disc,float a, float b, float c);
void disc2(float disc,float a, float b, float c);
void disc3(float disc,float a, float b, float c);

int main()
{
	float a,b,c,disc;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c: ";
	cin>>c;
	disc=(pow(b,2)-(4*a*c));
	if(disc>0)
	{
		disc1(disc,a,b,c);
	}
	if(disc==0)
	{
		disc2(disc,a,b,c);
	}
	if(disc<0)
	{
		disc3(disc,a,b,c);
	}
	return 0;
}



void disc1(float disc,float a, float b, float c)
{
	float root1,root2;
	root1= (-b+sqrt(disc))/(2*a);
	root2= (-b-sqrt(disc))/(2*a);
	cout<<"Solutions : x= "<<root1<<" and x= "<<root2; 
}


void disc2(float disc,float a, float b, float c)
{
	float root;
	root= (-b)/(2*a);
	cout<<"Solutions : x= "<<root; 
}


void disc3(float disc,float a, float b, float c)
{
	float real,imaginary;
	real= (-b)/(2*a);
	imaginary= (sqrt(disc))/(2*a);
	cout<<"Complex solutions : x= "<<real<<" + "<<imaginary<<"i and x= "<<real<<" - " <<imaginary <<"i"; 
}

