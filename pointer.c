#include<stdio.h>
void change(int *p)
{
    *p = 500;
    printf("In change a = %d\n", *p);
}
int main()
{
    int a = 10;
    int *pa;
    pa = &a;
    change(pa);
    printf("In main a = %d",a);
    return 0;
}
