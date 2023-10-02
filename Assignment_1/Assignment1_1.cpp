// Assignment 1
//  Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
//  day, month, year. Implement the following functions.
//  void initDate(struct Date* ptrDate);
//  void printDateOnConsole(struct Date* ptrDate);
//  void acceptDateFromConsole(struct Date* ptrDate);
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 5;
    ptrDate->month = 9;
    ptrDate->year = 2023;
}
void printDateOnConsole(struct Date *ptrDate)
{

    printf("Date is = %d/ %d /%d \n", ptrDate->day, ptrDate->month, ptrDate->year);
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter the day:");
    scanf("%d", &ptrDate->day);
    printf("Enter the month:");
    // scanf("%s", &ptrDate->month);
    scanf("%d", &ptrDate->month);
    printf("Enter the year:");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date d1;
    initDate(&d1);
    bool exit = false;
    int choice;
    while (!exit)
    {
        printf("\nEnter ur choice  : 1.acceptDateFromConsole \n2.printDateOnConsole\n 3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            acceptDateFromConsole(&d1);
            break;
        case 2:
            printDateOnConsole(&d1);
            break;
        case 3:
            exit = true;
            break;
        }
    }

    return 0;
}