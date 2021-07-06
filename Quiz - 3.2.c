#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    strcpy(str, "Karnataka");

    printf("%s ",strncat(str, "NITK", strncmp("Mangalore", str, 1)));
    return 0;
}
