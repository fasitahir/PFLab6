#include<iostream>
using namespace std;

int vollyball(string year , int holidays , int home);
main()
{
    string year;
    int holidays , home  ;

    cout<<"Enter The year(Normal or Leap): ";
    cin>> year;

    cout<<"Enter Number of holidays in this year: ";
    cin>> holidays;

    cout<<"Enter The number of time you went home: ";
    cin>> home;

    int result = vollyball( year , holidays , home);
    cout<<result;

}

int vollyball(string year , int holidays , int home)
{
    int result;

    if(year == "Normal")
    {
        result = 36 +  (holidays * 2)/ 3; 
    }

    else if(year == "Leap")
    {
        result = 36 +  (holidays * 2)/ 3;
        result = result + 0.15 * result; 
    }

    return result;
}