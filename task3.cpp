#include<iostream>
using namespace std;
string checktitle(float age , char gender );
main()
{
    float age;
    char gender;
    cout<<"Enter Your age: ";
    cin >> age; 

    cout<<"Enter Your gender(m or f): ";
    cin>> gender;

    string result = checktitle( age , gender );
    cout<<"Your Title is: "<<result;

}

string checktitle(float age , char gender )
{
    string title;
    if(gender == 'm' && age >=16)
    {
        title = "MR. ";
    }

    else if(gender == 'm' && age <16)
    {
        title = "Master ";
    }

    else if (gender == 'f' && age >= 16)
    {
        title = "Ms. ";
    }

    else if (gender == 'f' && age < 16)
    {
        title = "Miss ";
    }
    return title;
}