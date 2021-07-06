// find out the area of a tringle if the three co-ordinate are given

/*
#include <iostream>
#include <math.h>
using namespace std;

double len(int x1, int y1, int x2, int y2);

int main()
{
    int x1, y1, x2, y2, x3, y3;
    double a, b, c, s, area;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    a = len(x1, y1, x2, y2);
    b = len(x1, y1, x3, y3);
    c = len(x2, y2, x3, y3);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area = %lf", area);
    return 0;
}

double len(int x1, int y1, int x2, int y2)
{
    double temp;
    temp = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return temp;
}

*/

// with simple equation
// area = (1 / 2) * (x1 * (y2 - y3) + x2(y3 - y1) + x3(y1 - y2))


#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double area;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    area = (1/ (float)2)*((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));

    printf("Area = %lf", area);
    return 0;
}