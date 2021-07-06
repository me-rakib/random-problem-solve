#include<stdio.h>
void display(int *arr, int n);
int main()
{
    int a[] = {1,2,3,4,5};
    int len = sizeof(a)/sizeof(a[0]);
    display(a, len);
    return 0;
}
void display(int *arr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",*arr);
        arr++;
    }
}
