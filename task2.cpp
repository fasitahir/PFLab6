#include <iostream>
using namespace std;

float discount(string day , string month , float price);
main()
{
    float price;
    string day , month;
    cout<<"Enter Day: ";
    cin>>day;

    cout<<"Enter Month: ";
    cin>> month;

    cout<<"Enter total price: ";
    cin>>price;


    float result = discount(day ,month , price);
    cout<< "The payable price  is: "<< result;
}

float discount(string day , string month , float price)
{
    float payable;
    if(day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        payable = price - (0.1*price);
    }

    else if(day == "Monday" && (month == "November" || month == "December"))
    {
        payable = price - (0.05 * price);
    }
    else 
    {
        payable = price;
    }
    return payable;
}

