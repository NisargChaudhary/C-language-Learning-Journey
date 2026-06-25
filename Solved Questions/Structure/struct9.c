/*
Write a structure capable of storing date. Write a function to compare those dates.
*/
#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} Date;

int compare(Date d1, Date d2)
{
    if (d1.year != d2.year)
        return (d1.year - d2.year);
    if (d1.month != d2.month)
        return (d1.month - d2.month);
    return (d1.day - d2.day);
}

int main()
{
    Date date1, date2;
    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int result = compare(date1, date2);
    if (result < 0)
        printf("Date 1 is earlier than Date 2\n");
    else if (result > 0)
        printf("Date 1 is later than Date 2\n");
    else
        printf("Both dates are the same\n");

    return 0;
}