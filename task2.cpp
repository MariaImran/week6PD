#include <iostream>
using namespace std;
main()
{
    string studentName, subject1, subject2, subject3, subject4, subject5;
    char grade;
    float totalMarks, percentage, subject1Marks, subject2Marks, subject3Marks, subject4Marks, subject5Marks;
    cout << "enter subject1:";
    cin >> subject1;
    cout << "enter subject2:";
    cin >> subject2;
    cout << "enter subject3:";
    cin >> subject3;
    cout << "enter subject4:";
    cin >> subject4;
    cout << "enter subject5:";
    cin >> subject5;
    cout << "enter subject 1 marks:";
    cin >> subject1Marks;
    cout << "enter subject 2 marks:";
    cin >> subject2Marks;
    cout << "enter subject 3 marks:";
    cin >> subject3Marks;
    cout << "enter subject 4 marks:";
    cin >> subject4Marks;
    cout << "enter subject 5 marks:";
    cin >> subject5Marks;
    totalMarks = subject1Marks + subject2Marks + subject3Marks + subject4Marks + subject5Marks;
    percentage = totalMarks * (0.2);
    if (percentage >= 90 && percentage <= 100)
    {
        cout << "A+";
    }
    if (percentage >= 80 && percentage <= 89)
    {
        cout << "A";
    }
    if (percentage >= 70 && percentage <= 79)
    {
        cout << "B+";
    }
    if (percentage >= 60 && percentage <= 69)
    {
        cout << "B";
    }
    if (percentage >= 50 && percentage <= 59)
    {
        cout << "C";
    }
    if (percentage >= 40 && percentage <= 49)
    {
        cout << "D";
    }
    if (percentage < 40)
    {
        cout << "F";
    }
}