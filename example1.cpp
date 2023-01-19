#include<iostream>
using namespace std;
string welcomescreen(string name , int rollnumber);
main()
{
    string name;
    int rollnumber;

    cout<<"Enter Your name: ";
    cin>> name;

    cout<<"Enter your Roll Number: ";
    cin>> rollnumber;

    
    cout<<welcomescreen( name , rollnumber);

}

string welcomescreen(string name , int rollnumber)
{
    string Print;
    if(name == "Ali")
    {
        if(rollnumber == 501)
        {
            Print="Welcome Ali!!";
        }
    }
    else
    {
       Print="Try Again!!";
    }

    return Print;

}