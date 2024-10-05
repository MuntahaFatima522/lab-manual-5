#include<iostream>
using namespace std;
string isSymmetrical(int number);

int main()
{
	int number;
	string output;
	cout<<"Enter a three digit number: ";
	cin>>number;
	output=isSymmetrical(number);
	cout<<output;
	return 0;
}


string isSymmetrical(int number)
{
	string output;
	int digit1,digit2,digit3;
	int rem1,rem2;
	digit1=number/100;
	rem1=number%100;
	digit2=rem1/10;
	rem2=rem1%10;
	digit3=rem2/1;
	
	if(digit1==digit3)
	{
		output="The number is symmetrical";
		return output;
	}
	if(digit1!=digit3)
	{
		output="The number is not symmetrical";
		return output;
	}
}