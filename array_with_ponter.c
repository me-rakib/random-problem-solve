#include<stdio.h>
int main()
{
    int i, arr[4];
    for(i=0; i<4; i++)
    {
        printf("&arr[%d] = %p\n", i, &arr[i]);
    }
    printf("Address of arr = %p", &arr);
    return 0;
}
