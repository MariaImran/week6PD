#include <iostream>
using namespace std;
void priceForWholeStayS(string month, string typeOfRoom, int noOfdays);
void priceForWholeStayA(string month, string typeOfRoom, int noOfdays);
main()
{
    string month, typeOfRoom;
    int noOfdays;
    cout << "Enter month:";
    cin >> month;
    cout << "Enter number of days:";
    cin >> noOfdays;
    priceForWholeStayS(month, typeOfRoom, noOfdays);
    cout << endl;
    priceForWholeStayA(month, typeOfRoom, noOfdays);
}
void priceForWholeStayS(string month, string typeOfRoom, int noOfdays)
{
    float priceForWholeStayS;
    if ((month == "may") || (month == "october"))
    {
        if (noOfdays <= 7)
        {
            priceForWholeStayS = 50 * noOfdays;
            cout << priceForWholeStayS;
        }
        if ((noOfdays > 7) && (noOfdays < 14))
        {
            priceForWholeStayS = (50 * noOfdays) * 0.05;
            cout << priceForWholeStayS;
        }
        if (noOfdays > 14)
        {
            priceForWholeStayS = (50 * noOfdays) * 0.30;
            cout << priceForWholeStayS;
        }
    }
    if ((month == "june") || (month == "september"))
    {
        if (noOfdays <= 14)
        {
            priceForWholeStayS = 75.20 * noOfdays;
            cout << priceForWholeStayS;
        }
        if (noOfdays > 14)
        {
            priceForWholeStayS = (75.20 * noOfdays) * 0.20;
            cout << priceForWholeStayS;
        }
    }
    if ((month == "july") || (month == "august"))
    {

        priceForWholeStayS = 76.00 * noOfdays;
        cout << priceForWholeStayS;
    }
    
}
void priceForWholeStayA(string month, string typeOfRoom, int noOfdays)
{
    float priceForWholeStayA;
    if ((month == "may") || (month == "october"))
    {
        if (noOfdays <= 14)
        {
            priceForWholeStayA = 65.00 * noOfdays;
            cout << priceForWholeStayA;
        }
       
        if (noOfdays > 14)
        {
            priceForWholeStayA = (65.00 * noOfdays) * 0.10;
            cout << priceForWholeStayA;
        }
    }
    if ((month == "june") || (month == "september"))
    {
        if (noOfdays <= 14)
        {
            priceForWholeStayA = 68.70 * noOfdays;
            cout << priceForWholeStayA;
        }
        if (noOfdays > 14)
        {
            priceForWholeStayA = (68.70 * noOfdays) * 0.10;
            cout << priceForWholeStayA;
        }
    }
    if ((month == "july") || (month == "august"))
    {
        if (noOfdays <= 14)
        {
            priceForWholeStayA = 77.00 * noOfdays;
            cout << priceForWholeStayA;
        }
        if (noOfdays > 14)
        {
            priceForWholeStayA = (77.00 * noOfdays) * 0.10;
            cout << priceForWholeStayA;
        }
    }
  
}