#include <iostream>
using namespace std;
int main()
{
    int year;
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap Year");
    }
    else {
        printf("Not leap year");
    }
    return 0;
}