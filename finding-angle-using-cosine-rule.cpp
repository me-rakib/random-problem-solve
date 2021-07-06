// find the angles of a triangle if three hands langths are given

#include <iostream>
#include <math.h>
using namespace std;

double calculate_angle(int a, int b, int c);
int main()
{
    double a, b, c, A, B, C;
    scanf("%lf %lf %lf", &a, &b, &c);

    A = calculate_angle(b, c, a);
    B = calculate_angle(c, a, b);
    C = calculate_angle(a, b, c);

    printf("%lf %lf %lf", A, B, C);
    return 0;
}

double calculate_angle(int a, int b, int c)
{
    double res, pi;
    pi = acos(-1);
    res = acos(((pow(a, 2)) + pow(b, 2) - pow(c, 2)) / (2 * a * b));
    return (res*180)/pi;
}