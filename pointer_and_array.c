#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int *p;
    p = arr;
    while(p<arr+5)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}
