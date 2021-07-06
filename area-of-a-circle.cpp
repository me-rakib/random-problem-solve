#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double r, area, pi;
    scanf("%lf", &r);
    pi = acos(-1);
    area = pi * r * r;
    printf("Area = %lf", area);
    return 0;
}