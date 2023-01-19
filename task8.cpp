#include <iostream>
using namespace std;
float fifa(float budget, string category, int people);
main()
{
    float budget;
    string category;
    int people;

    cout << "Enter Budget: ";
    cin >> budget;

    cout << "Enter Category: ";
    cin >> category;

    cout << "Enter People: ";
    cin >> people;
    float result = fifa(budget, category, people);
    if (result < 0)
    {
        cout << "NOT ENOUGH MONEY! You need " << -1 * result << " QR To buy the required ticket. " << endl;
    }
    else if (result >= 0)
    {
        cout << "Yes! You have " << result << " QR Left." << endl;
    }
}

float fifa(float budget, string category, int people)
{

    float money;
    float ticket;

    if ((people >= 1 && people <= 4) && category == "Normal")
    {
        money = budget - 0.75 * budget;
        ticket = money - 249.99 * people;
    }

    else if ((people >= 5 && people <= 9) && category == "Normal")
    {
        money = budget - 0.60 * budget;
        ticket = money - 249.99 * people;
    }

    else if ((people >= 10 && people <= 24) && category == "Normal")
    {
        money = budget - 0.50 * budget;
        ticket = money - 249.99 * people;
    }

    else if ((people >= 25 && people <= 49) && category == "Normal")
    {
        money = budget - 0.40 * budget;
        ticket = money - 249.99 * people;
    }

    else if (people >= 50 && category == "Normal")
    {
        money = budget - 0.25 * budget;
        ticket = money - 249.99 * people;
    }

    else if ((people >= 1 && people <= 4) && category == "VIP")
    {
        money = budget - 0.75 * budget;
        ticket = money - 499.99 * people;
    }

    else if ((people >= 5 && people <= 9) && category == "VIP")
    {
        money = budget - 0.60 * budget;
        ticket = money - 499.99 * people;
    }

    else if ((people >= 10 && people <= 24) && category == "VIP")
    {
        money = budget - 0.50 * budget;
        ticket = money - 499.99 * people;
    }

    else if ((people >= 25 && people <= 49) && category == "VIP")
    {
        money = budget - 0.40 * budget;
        ticket = money - 499.99 * people;
    }

    else if (people >= 50 && category == "VIP")
    {
        money = budget - 0.25 * budget;
        ticket = money - 499.99 * people;
    }

    return ticket;
}