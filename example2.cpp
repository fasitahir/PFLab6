#include<iostream>
using namespace std;

int isgreater(int num1 , int num2 , int num3);
main()
{
    int num1 , num2 , num3;
    

    cout<<"Enter First Number: ";
    cin>> num1;

    cout<<"Enter second Number: ";
    cin>> num2;

    cout<<"Enter third Number: ";
    cin>> num3;


  
    cout<<"Greatest Number is: "<<isgreater(num1 ,num2 , num3);
}
int isgreater(int num1 , int num2 , int num3)
{
    int greatest;
    
    if(num1>num2 && num1>num3)
    {
        greatest = num1;
    }

    else if(num2>num1 && num2>num3)
    {
        greatest = num2;
    }

    else if(num3>num1 && num3>num2)
    {
        greatest = num3;
    }

    else
    {
        greatest = num1;
    }

    return greatest;

}