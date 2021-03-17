// pass by value

#include<stdio.h>
void change(int pa);
int main()
{
    int a = 10;
    int *pa;
    pa = &a;
    change(pa);
    printf("A in main = %d",a);
    return 0;
}

void change(char pa)
{
    *pa = 100;
    printf("A in change = %d\n",a);
}
