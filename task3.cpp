#include <iostream>
using namespace std;
main()
{
    int day;
    string month;
    cout << "Enter day:";
    cin >> day;
    cout << "Enter month:";
    cin >> month;
    if ((month == "march" && day >= 21) || (month == "april" && day >= 19))
    {
        cout << "Your zodiac sign is ARIES and you symbol is THE RAM";
    }
    if ((month == "april" && day >= 20) || (month == "may" && day >= 20))
    {
        cout << "Your zodiac sign is TAURUS and you symbol is THE BULL";
    }
    if ((month == "may" && day >= 21) || (month == "june" && day >= 20))
    {
        cout << "Your zodiac sign is GEMINI and you symbol is THE TWINS";
    }
    if ((month == "june" && day >= 21) || (month == "july" && day >= 22))
    {
        cout << "Your zodiac sign is CANCER and you symbol is THE CRAB";
    }
    if ((month == "july" && day >= 23) || (month == "august" && day >= 22))
    {
        cout << "Your zodiac sign is LEO and you symbol is THE LION";
    }
    if ((month == "august" && day >= 23) || (month == "september" && day >= 22))
    {
        cout << "Your zodiac sign is VIRGO and you symbol is THE VIRGIN";
    }
    if ((month == "september" && day >= 23) || (month == "october" && day >= 22))
    {
        cout << "Your zodiac sign is LIBRA and you symbol is THE SCALES";
    }
    if ((month == "october" && day >= 23) || (month == "november" && day >= 21))
    {
        cout << "Your zodiac sign is SCORPIO and you symbol is THE SCORPION";
    }
    if ((month == "november" && day >= 22) || (month == "december" && day >= 21))
    {
        cout << "Your zodiac sign is SAGITTARIUS and you symbol is THE ARCHER";
    }
    if ((month == "december" && day >= 22) || (month == "january" && day >= 19))
    {
        cout << "Your zodiac sign is CAPRICON and you symbol is THE GOAT";
    }
    if ((month == "january" && day >= 20) || (month == "february" && day >= 18))
    {
        cout << "Your zodiac sign is AQUARIUS and you symbol is THE WATER BEARER";
    }
    if ((month == "february" && day >= 19) || (month == "march" && day >= 20))
    {
        cout << "Your zodiac sign is PIECES and you symbol is THE FISHES";
    }
}