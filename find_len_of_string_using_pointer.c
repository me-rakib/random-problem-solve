#include<stdio.h>
void len(char *c);
int main()
{
    char c[20] = "Hello";
    len(c);
    return 0;
}

void len(char *c)
{
    int i=0;
    while(*c != '\0')
    {
        i++;
        c++;
    }
    printf("Length of array = %d",i);
}
