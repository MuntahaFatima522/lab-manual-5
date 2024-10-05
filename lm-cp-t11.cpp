#include<iostream>
#include<string.h>
using namespace std;

string calculatePoolState(int volume,int flowrate1,int flowrate2,float hours);

main()
{
    int volume,flowrate1,flowrate2;
    float hours;
    string result;
    cout<<"Enter volume of the pool in liters: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flowrate1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>flowrate2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    result=calculatePoolState(volume,flowrate1,flowrate2,hours);
    cout<<result;
    return 0;
}


string calculatePoolState(int volume,int flowrate1,int flowrate2,float hours)
{
    float totalFlowRate1,totalFlowRate2,totalFlowRate,overflow;
    float poolPercent,pipe1Percent,pipe2Percent;
    string result;
    totalFlowRate1=hours*flowrate1;
    totalFlowRate2=hours*flowrate2;
    totalFlowRate=totalFlowRate1+totalFlowRate2;
    poolPercent=(totalFlowRate/volume)*100;
    pipe1Percent=(totalFlowRate1/totalFlowRate)*100;
    pipe2Percent=(totalFlowRate2/totalFlowRate)*100;
    if(totalFlowRate<=volume)
    {
    result="The pool is "+ to_string(poolPercent)+ "% full.Pipe 1: "+ to_string(pipe1Percent)+"%. Pipe 2: "+to_string(pipe2Percent)+"%";
    return result;
    }
    if (totalFlowRate>volume)
    {
        overflow=totalFlowRate-volume;
        result="For "+ to_string(hours)+" ,the pool overflows with " +to_string(overflow)+" litres";
        return result;
    }
}