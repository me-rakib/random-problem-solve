#include<stdio.h>
#include<string.h>
#define MAX_VALUE 100
int main()
{
    char src[MAX_VALUE], dest[MAX_VALUE];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    strncat(dest,src, 10);
    printf("%s",dest);
    return 0;
}
