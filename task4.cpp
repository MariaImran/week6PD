#include <iostream>
using namespace std;
float calculateBill(string typeOfService, float bill, int minutes);
main()
{
    float bill;
    int minutes;
    string typeOfService;
    cout << "Enter type of sevice used:";
    cin >> typeOfService;
    cout << "Enter time in minutes:";
    cin >> minutes;
    cout << "Total bill is:" << calculateBill(typeOfService, bill, minutes);
}
float calculateBill(string typeOfService, float bill, int minutes)
{
    if (typeOfService == "regular")
    {
        if (minutes <= 50)
        {
            bill = 10.00;
        }
        bill = (0.20 * minutes) + 10.00;
    }
    if (typeOfService == "premium")
    {
        string time;
        cout << "Enter time:";
        cin >> time;
        if (time == "day")
        {
            if (minutes <= 75)
            {
                bill = 25.00;
            }
            if (minutes > 75)
            {
                bill = (0.10 * minutes) + 25.00;
            }
        }
        if (time == "night")
        {
            if (minutes <= 100)
            {
                bill = 25.00;
            }
            if (minutes > 75)
            {
                bill = (0.05 * minutes) + 25.00;
            }
        }
    }
    return bill;
}
