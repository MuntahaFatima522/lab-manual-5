#include<iostream>
using namespace std;

string checkAlphabetCase(char character);

int main()
{
	char character;
	string output;
	cout<<"Enter a character (A/a): ";
	cin>>character;
	output=checkAlphabetCase(character);
	cout<<output;
	return 0;
}


string checkAlphabetCase(char character)
{
	string output;
	if(character=='A')
	{
		output="You have entered capital A";
		return output;
	}
	if(character=='a')
	{
		output="You have entered small a";
		return output;
	}
}