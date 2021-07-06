#include <iostream>
#include <math.h>
int main()
{
    int x1, y1, x2, y2;
    double dist;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    printf("Distance = %lf", dist);
    return 0;
}