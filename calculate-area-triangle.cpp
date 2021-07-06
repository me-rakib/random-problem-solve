//calculate are of a triangle from if length of 3 hands are given

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    double s, area;
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %lf", area);
    return 0;
}
