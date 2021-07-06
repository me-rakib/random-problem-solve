#include<stdio.h>
int main()
{
    int a=8, b=19;
    int *p, *q, *t;
    p = &a;    // p = address of a
    q = &b;    // q = address of b
    t=p;       // t = p = address of a
    p=q;       // p = q = address of b
    q=t;       // q = t = p = address of a
    printf("%d %d ",*p,*q);   // *p = 19, *q = 8
    a=*p;     // *p = 19, a = *p = *t = *q = 19
    b=*q;     //  *q = 19
    printf("%d %d",a,b);
    return 0;
}
