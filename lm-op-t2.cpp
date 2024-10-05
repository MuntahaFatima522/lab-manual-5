#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float base,exp;
	cout<<"Enter the base number: ";
	cin>>base;
	cout<<"Enter the exponent: ";
	cin>>exp;
	cout<<base <<" raised to power "<< exp <<" is : "<<pow(base,exp);
	return 0;
}