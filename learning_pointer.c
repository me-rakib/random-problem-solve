// incrementing pointer value
#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of integer is %d bytes\n", sizeof(int));
    printf("Address p = %d, Value p = %d\n",p,*p);
    printf("Address p+1 = %d, Value p+1 = %d\n",p+1,*(p+1));

    char *p0;
    p0 = (char*)p; //typecasting
    printf("Size of char = %d\n",sizeof(char));
    printf("Address p0 = %d, value p0 = %d\n",p0, *p0);
    printf("Address p0+1 = %d, value p0+1 = %d",p0+1, *(p0+1));
    return 0;
}
