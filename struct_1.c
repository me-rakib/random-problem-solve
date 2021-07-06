#include<stdio.h>

struct date
{
    int date;
    char month[10];
    int year;
} today, date1, date2;
int main()
{
    scanf("%d %s %d", &today.date, &today.month, &date2.year);
    printf("Date = %d\nMonth = %s\nYear2 = %d\n\n", today.date, today.month, today.year);
    return 0;
}
