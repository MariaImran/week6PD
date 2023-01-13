#include <iostream>
using namespace std;
main()
{
    int startingTimeHour, arrivingTimeHour, startingTimeMin, arrivingTimeMin, totalStartingTime, totalArrivingTime, total;
    cout << "Enter starting time hour:";
    cin >> startingTimeHour;
    cout << "Enter arriving time hour:";
    cin >> arrivingTimeHour;
    cout << "Enter starting time minutes:";
    cin >> startingTimeMin;
    cout << "Enter arriving time minutes:";
    cin >> arrivingTimeMin;
    totalStartingTime = (startingTimeHour * 60) + startingTimeMin;
    totalArrivingTime = (arrivingTimeHour * 60) + arrivingTimeMin;
    if (totalArrivingTime == totalStartingTime)
    {
        cout << "ON TIME.";
    }
    if (totalArrivingTime < totalStartingTime)
    {
        total = totalStartingTime - totalArrivingTime;
        if (total <= 30)
        {
            cout << "ON TIME." << total <<"minutes";
        }
        if (total > 30)
        {
            cout << "EARLY." << total <<"minutes";
        }
    }

    if (totalArrivingTime > totalStartingTime)
    {
        total = totalArrivingTime - totalStartingTime;
        cout << "LATE." << total <<"minutes";
    }
}