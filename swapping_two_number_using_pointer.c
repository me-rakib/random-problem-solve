#include<stdio.h>
void swipe(int *p, int *q);
int main()
{
    int a = 10, b = 20;
    swipe(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}
void swipe(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
