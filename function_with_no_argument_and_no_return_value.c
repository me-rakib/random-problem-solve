#include<stdio.h>
void greater_num();
int main()
{
    greater_num();
}
void greater_num()
{
    int n1, n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        printf("%d > %d",n1,n2);
    }
    else
    {
        printf("%d < %d",n1,n2);
    }
}
