#include<iostream>
using namespace std;

string OddishOrEvenish( int number);

main()
{
    int number;
    string result;
    cout<<"Enter a five-digit number: ";
    cin>>number;
    result=OddishOrEvenish(number);
    cout<<result;
    return 0;
}


string OddishOrEvenish( int number)
{
    int num1,num2,num3,num4,num5;
    int rem1,rem2,rem3,rem4;
    int sumOfNumbers;
    string result;

    num1=number/10000;
    rem1=number%10000;

    num2=rem1/1000;
    rem2=rem1%1000;

    num3=rem2/100;
    rem3=rem2%100;

    num4=rem3/10;
    rem4=rem3%10;

    num5=rem4/1;

    sumOfNumbers=num1+num2+num3+num4+num5;

    if(sumOfNumbers%2==0)
    {
        result="Evenish";
        return result;
    }

    if(sumOfNumbers%2!=0)
    {
        result="Oddish";
        return result;
    }
}