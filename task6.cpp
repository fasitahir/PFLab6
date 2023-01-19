#include<iostream>
using namespace std;
float cheapest(string time , float distance);
main()
{
    string time;
    float distance;

    cout<<"Enter Time (Day or Night): ";
    cin>> time;

    cout<<"Enter distance : ";
    cin>>distance;

    float result = cheapest( time ,distance);
    cout<<"The cheapest fare is: "<<result;
}

float cheapest(string time , float distance)
{
    float cost;
    if(distance<20 && time == "Day")
    {
        cost = (distance * 0.79 ) + 0.70;
    }

    else if(distance<20 && time == "Night")
    {
        cost = (distance * 0.90 ) + 0.70;
    }

    else if(distance>=20 && distance<100)
    {
        cost = (distance * 0.09 ) ;
    }

    else if(distance>=100)
    {
        cost = (distance * 0.06) ;
    }

    return cost;
}