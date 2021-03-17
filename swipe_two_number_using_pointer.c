#include<stdio.h>
void swipe(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    swipe(&a, &b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    return 0;
}
