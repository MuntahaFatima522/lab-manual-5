#include<iostream>
using namespace std;

string InEnglish(int number);

main()
{
    int number;
    string result;
    cout<<"Enter a number(1 to 99): ";
    cin>>number;
    result=InEnglish(number);
    cout<<result;
    return 0;
}

string InEnglish(int number)
{
    
	int tens,ones;
	string result,ONES,TENS;
	
	if(number<10)							//For numbers 1 to 9
	{
		if(number==1)
		{
			result="One";
		}
		if(number==2)
		{
			result="Two";
		}
		if(number==3)
		{
			result="Three";
		}
		if(number==4)
		{
			result="Four";
		}
		if(number==5)
		{
			result="Five";
		}
		if(number==6)
		{
			result="Six";
		}
		if(number==7)
		{
			result="Seven";
		}
		if(number==8)
		{
			result="Eight";
		}
		if(number==9)
		{
			result="Nine";
		}
		return result;
	}

	if(number<20 && number>10)					//For numbers 11 to 19
	{
		if(number==11)
		{
			result="Eleven";
		}
		if(number==12)
		{
			result="Twelve";
		}
		if(number==13)
		{
			result="Thirteen";
		}
		if(number==14)
		{
			result="Fourteen";
		}
		if(number==15)
		{
			result="Fifteen";
		}
		if(number==16)
		{
			result="Sixteen";
		}
		if(number==17)
		{
			result="Seventeen";
		}
		if(number==18)
		{
			result="Eighteen";
		}
		if(number==19)
		{
			result="Nineteen";
		}
		return result;
	}


	if(number%10==0)					//For multiples of 10(10,20,30,40,50,60,70,80,90)
	{
		if(number==10)
		{
			result="Ten";
		}
		if(number==20)
		{
			result="Twenty";
		}
		if(number==30)
		{
			result="Thirty";
		}
		if(number==40)
		{
			result="Forty";	
		}
		if(number==50)
		{
			result="Fifty";
		}
		if(number==60)
		{
			result="Sixty";
		}
		if(number==70)
		{
			result="Seventy";
		}
		if(number==80)
		{
			result="Eighty";
		}
		if(number==90)
		{
			result="Ninety";
		}
		return result;
	}


	if(number%10!=0 && number>20)				//For remaining numbers(21-29,31-39,41-49,51-59,61-69,71-79,81-89,91-99)
	{
		tens=number/10;
		ones=number%10;

		if(tens==2)
		{
			TENS="Twenty";
		}
		if(tens==3)
		{
			TENS="Thirty";
		}

		if(tens==4)
		{
			TENS="Forty";
		}

		if(tens==5)
		{
			TENS="Fifty";
		}

		if(tens==6)
		{
			TENS="Sixty";
		}

		if(tens==7)
		{
			TENS="Seventy";
		}

		if(tens==8)
		{
			TENS="Eighty";
		}

		if(tens==9)
		{
			TENS="Ninety";
		}
		if(ones==1)
		{
			ONES="One";
		}
		if(ones==2)
		{
			ONES="Two";
		}
		if(ones==3)
		{
			ONES="Three";
		}

		if(ones==4)
		{
			ONES="Four";
		}

		if(ones==5)
		{
			ONES="Five";
		}

		if(ones==6)
		{
			ONES="Six";
		}

		if(ones==7)
		{
			ONES="Seven";
		}

		if(ones==8)
		{
			ONES="Eight";
		}

		if(ones==9)
		{
			ONES="Nine";
		}
		result=TENS+ONES;
		return result;
	}
	
}