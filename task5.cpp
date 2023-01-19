#include<iostream>
using namespace std;

float totalincome(string screen , int rows , int coloums);
main()
{
    int rows , coloums;
    string screen;

    cout<<"Enter screen type: ";
    cin>>screen;

    cout<<"Enter rows: ";
    cin>>rows;

    cout<<"Enter coloums: ";
    cin>>coloums;

    float result =  totalincome(screen , rows ,coloums);
    cout<<"The income is: "<< result;


}

float totalincome(string screen , int rows , int coloums)
{
    float result;
    if(screen == "Premiere" )
    {
        result = rows * coloums * 12.00;
    }

    else if(screen == "Normal" )
    {
        result = rows * coloums * 7.50;
    }

    else if(screen == "Discout" )
    {
        result = rows * coloums * 7.50;
    }
    return result;
}