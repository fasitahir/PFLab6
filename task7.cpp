#include <iostream>
using namespace std;

float cost(string city , string product , float quantity);
main()
{
    string city , product;
    float quantity;

    cout << "Enter City: ";
    cin >> city;

    cout << "Enter Product: ";
    cin >> product;
   
    cout<<"Enter Quantity: ";
    cin>> quantity;

    float result = cost( city , product , quantity);
    cout<<"The Total Cost is: " << result;
  
}

float cost(string city , string product , float quantity)
{

    float result;
    if(city == "Sofia" && product == "coffee")
    {
        result = 0.50 * quantity ; 
    }

    else if(city == "Sofia" && product == "water")
    {
        result = 0.80 * quantity ; 
    }

    else if(city == "Sofia" && product == "beer")
    {
        result = 1.20 * quantity ; 
    }

    else if(city == "Sofia" && product == "sweets")
    {
        result = 1.45 * quantity ; 
    }

    else if(city == "Sofia" && product == "peanuts")
    {
        result = 1.60 * quantity ; 
    }

    if(city == "Plovdiv" && product == "coffee")
    {
        result = 0.40 * quantity ; 
    }

    else if(city == "Plodiv" && product == "water")
    {
        result = 0.70 * quantity ; 
    }

    else if(city == "Plodiv" && product == "beer")
    {
        result = 1.15 * quantity ; 
    }

    else if(city == "Plodiv" && product == "sweets")
    {
        result = 1.30 * quantity ; 
    }

    else if(city == "Plodiv" && product == "peanuts")
    {
        result = 1.50 * quantity ; 
    }    

    if(city == "Varna" && product == "coffee")
    {
        result = 0.45 * quantity ; 
    }

    else if(city == "Varna" && product == "water")
    {
        result = 0.70 * quantity ; 
    }

    else if(city == "Varna" && product == "beer")
    {
        result = 1.10 * quantity ; 
    }

    else if(city == "Varna" && product == "sweets")
    {
        result = 1.35 * quantity ; 
    }

    else if(city == "Varna" && product == "peanuts")
    {
        result = 1.55 * quantity ; 
    }

    return result;

}
