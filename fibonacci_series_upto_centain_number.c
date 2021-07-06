#include<stdio.h>
int main()
{
    int i, n, t1=0, t2=1, next;
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    next = t1+t2;
    while(next<=n)
    {
        printf("%d ",next);
        t1 = t2;
        t2 = next;
        next = t1+t2;
    }
    return 0;
}
