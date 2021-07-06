#include<stdio.h>
int main()
{
    int arr[5];
    int i, sum = 0;
    for(i=0; i<5; i++)
    {
        scanf("%d",arr+i);
        sum += *(arr+i);
    }
    printf("Sum of array = %d",sum);
    return 0;
}
