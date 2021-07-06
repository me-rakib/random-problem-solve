// Pass by reference
#include<stdio.h>
void increment(int *p)
{
    *p = *p + 10;
    printf("%d\n",p);
}
int main()
{
    int a = 10;
    printf("%d\n",&a);
    increment(&a);
    printf("%d",a);
    return 0;
}
