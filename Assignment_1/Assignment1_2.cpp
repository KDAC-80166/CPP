// Assignment 1
//  Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
//  Date is having data members day, month, year. Implement the following functions.
//  void initDate();
//  void printDateOnConsole();
//  void acceptDateFromConsole();
//  bool isLeapYear();
#include <iostream>
using namespace std;
struct Date
{
private:
    int day;
    int month;
    int year;

public:
    // Date()
    // {
    //     this->year = 2023;
    //     this->month = 9;
    //     this->day = 22;
    // }
    void initDate()
    {
        this->year = 2023;
        this->month = 9;
        this->day = 22;
    }
    void acceptDateFromConsole()
    {
        cout << "Enter a day" << endl;

        cin >> this->day;
        cout << "Enter a month" << endl;
        cin >> this->month;
        cout << "Enter a year" << endl;
        cin >> this->year;
    }
    void printDateOnConsole()
    {
        cout << "Date is " << this->day << "/" << this->month << "/" << this->year << endl;
    }

    bool isLeapYear()
    {
        cout << "Enter a year" << endl;
        cin >> this->year;

        if (year % 400 == 0)

            return 1;
        else if (year % 100 == 0)
        {
            return 0;
        }
        else if (year % 4 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    struct Date d1;
    d1.initDate();
    bool exit = false;
    int choice;
    while (!exit)
    {

        cout << "Enter your choice :1.AcceptDate 2.printDate 3.checkLeapyr 4.Exit" << endl;

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "1.AcceptDate"
                 << "\n";
            d1.acceptDateFromConsole();
            break;
        case 2:
            cout << "2.printDate"
                 << "\n";
            d1.printDateOnConsole();
            break;
        case 3:
            cout << "3.checkLeapyre"
                 << "\n";
            if (d1.isLeapYear())
                cout << "Is a leap yr" << endl;

            else
                cout << "Is not a leap yr" << endl;
            break;
        case 4:
            exit = true;
            cout << "Exit successfully" << endl;

            break;
        }
    }
    return 0;
}