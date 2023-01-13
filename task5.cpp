#include <iostream>
using namespace std;
float bill(string day, string fruit, float quantity);
main()
{
    string day, fruit;

    float quantity;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter fruit:";
    cin >> fruit;
    cout << "Enter quantity:";
    cin >> quantity;
    cout << "your bill is :" << bill(day, fruit, quantity);
}
float bill(string day, string fruit, float quantity)
{
    float bill;
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "banana"))
    {
        bill = 2.50 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "apple"))
    {
        bill = 1.20 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "orange"))
    {
        bill = 0.85 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "grapefruit"))
    {
        bill = 1.45 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "kiwi"))
    {
        bill = 2.70 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "pineapple"))
    {
        bill = 5.50 * quantity;
    }
    if ((day == "monday") || (day == "tuesday") || (day == "wednesday") || (day == "thuirsday") || (day == "friday") && (fruit == "grapes"))
    {
        bill = 3.85 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "banana"))
    {
        bill = 2.70 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "apple"))
    {
        bill = 1.25 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "orange"))
    {
        bill = 0.90 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "grapefruit"))
    {
        bill = 1.60 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "kiwi"))
    {
        bill = 3.00 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "pineapple"))
    {
        bill = 5.60 * quantity;
    }
    if ((day == "saturday") || (day == "sunday") && (fruit == "grapes"))
    {
        bill = 4.20 * quantity;
    }
    return bill;
}