#include<stdio.h>
#include<string.h>
void print(char *c)
{
    int i=0;
    while(*(c+i) != '\0')
    {
        printf("%c ", *(c+i));
        i++;
    }
}
int main()
{
    char c[] = "Hello";
    print(c);
    return 0;
}
