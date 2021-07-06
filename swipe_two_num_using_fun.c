#include<stdio.h>
void swipe(int a, int b);
int main()
{
    int n1 = 10, n2 = 20;
    swipe(n1, n2);
    return 0;
}
void swipe(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("n1 = %d\nn2 = %d",a,b);
}
