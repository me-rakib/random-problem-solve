// void pointer or generic pointer
#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;

    printf("Size of integer = %d\n",sizeof(int));
    printf("Address = %d, Value = %d\n",p,*p);

    void *po;
    po = p;
    printf("Address = %d",po);
    return 0;
}
