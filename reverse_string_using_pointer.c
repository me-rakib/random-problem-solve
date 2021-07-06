/*
without pointer

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main()
{
    char str[MAX_SIZE];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int start_index = strlen(str)-1;
    while(start_index>=0)
    {
        printf("%c",str[start_index]);
        start_index--;
    }
    return 0;
}

*/

// with pointer

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main()
{
    char src[MAX_SIZE];
    printf("Enter text: ");
    fgets(src, sizeof(src), stdin);
    char *p;
    p = src;
    int i, len = strlen(src);
    for(i=len; i>=0; i--)
    {
        printf("%c",*(p+i));
    }
    return 0;
}
