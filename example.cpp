#include<iostream>
using namespace std;
main()
{
    int price;
    string brand;

    cout<<"Enter Price: ";
    cin>> price;

    cout<<"Enter Brand Name: ";
    cin>> brand;

    if( price <= 1500 && brand == "J.")
    {
        cout<<"Buy the dress!";
    }

    else
    {
        cout<<"Dont buy the dress!";
    }
}