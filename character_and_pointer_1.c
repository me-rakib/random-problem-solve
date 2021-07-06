#include<stdio.h>
void print(char *c)
{
    c[0] = 'A';
    while(*c != '\0')
    {
        printf("%c ",*c);
        c++;
    }
}
int main()
{
    char c[] = "Hello";
    print(c);
    return 0;
}
