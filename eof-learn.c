#include<stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if(a == 0) 
        {
            break;
        }
        else 
        {
            printf("%d ",a);
        }
    }
    return 0;
}