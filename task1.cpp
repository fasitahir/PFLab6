#include <iostream>
using namespace std;

char grade(int number);
main()
{
    int number;
    cout<<"Enter numbers: ";
    cin>>number;

    char result = grade( number);
    cout<<"Your Grade is: "<< result;
}

char grade(int number)
{

    char result; 
    if(number>=0 && number < 50 )
    {
        result = 'F';
    }

    else if(number >= 50 && number <= 60 )
    {
        result = 'E';
    }

    else if(number >= 61 && number <= 70 )
    {
        result = 'D';
    }

    else if(number >= 71 && number <= 80 )
    {
        result = 'C';
    }

    else if(number >= 81 && number <= 85 )
    {
        result = 'B';
    }

    else if(number >85 && number<= 100 )
    {
        result = 'A';
    }



    return result;
    
}