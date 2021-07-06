#include<stdio.h>
struct point
{
    int x, y;
};
int main()
{
    struct point p = {.y = 1, .x = 3};
    printf("%d %d",p.x, p.y);
    return 0;
}
