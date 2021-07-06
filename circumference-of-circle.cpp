#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r;
    double pi, circumference;
    scanf("%d", &r);
    pi = acos(-1);
    circumference = 2 * pi * r;
    printf("Circumference of circle = %lf",circumference);
    return 0;
}