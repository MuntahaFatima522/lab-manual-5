#include<iostream>
#include<string.h>
using namespace std;

string timeTravel(int hours,int minutes);

main()
{
    int hours,minutes;
    string result;
    cout<<"Enter hours(1-23): ";
    cin>>hours;
    cout<<"Enter minutes(0-59): ";
    cin>>minutes;
    result=timeTravel(hours,minutes);
    cout<<result;
    return 0;
}


string timeTravel(int hours,int minutes)
{
    string result;
    int minutesAfterTravel=minutes+15;
    if(minutesAfterTravel>=60)
    {
        minutes=minutesAfterTravel-60;
        hours++;
         result=to_string(hours)+":"+to_string(minutes);
        return result;
    }

     if(minutesAfterTravel<60)
    {
        cout<<hours<<":"<<minutes;
         result=to_string(hours)+":"+to_string(minutes);
        return result;
    }

}