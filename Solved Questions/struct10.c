/*
Solve problem 9 for time using ‘typedef’ keyword.
*/
#include <stdio.h>

typedef struct time
{
    int hours;
    int minutes;
    int seconds;
} Time;

int main()
{
    Time t1, t2;
    printf("Enter first time (HH MM SS): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter second time (HH MM SS): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    if (t1.hours != t2.hours)
        printf("Time 1 is %s than Time 2\n", (t1.hours < t2.hours) ? "earlier" : "later");
    else if (t1.minutes != t2.minutes)
        printf("Time 1 is %s than Time 2\n", (t1.minutes < t2.minutes) ? "earlier" : "later");
    else if (t1.seconds != t2.seconds)
        printf("Time 1 is %s than Time 2\n", (t1.seconds < t2.seconds) ? "earlier" : "later");
    else
        printf("Both times are the same\n");

    return 0;
}