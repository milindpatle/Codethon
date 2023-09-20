// Write a program to print weekday of given date.

#include <iostream>
using namespace std;

int main()
{

    int date;

    cout << "Enter the date :" << endl;
    cin >> date;

    switch (date)
    {
    case 1:
        cout << "1st day is Monday" << endl;
    case 2:
        cout << "2nd day is Tuesday" << endl;
    case 3:
        cout << "3rd day is wednesday" << endl;
    case 4:
        cout << "4th day is Thursday" << endl;
    case 5:
        cout << "5th day is Friday" << endl;
    case 6:
        cout << "6th day is Saturday" << endl;
    case 7:
        cout << "7th day is Sunday" << endl;
    default:
        cout << "Invalid date" << endl;
    }

    cout << endl;
}