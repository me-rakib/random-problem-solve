#include<stdio.h>
int main()
{
    int i, c=0, n=10;
    for(i=1; i<=1000; i=i*2)
    {
        for(i=2; i<=1000; i=i*i)
        {
            for(i=1; i<=n; i=i+(n/2))
            {
                printf("Hello");
            }
        }
    }
    printf("%d",c);
}
