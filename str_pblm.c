#include<stdio.h>
int main()
{
    char str1[] = "JOHN";
    char *str2;
    // printf("%c\n",*str1);
    str2 = str1;  // str also point to str1 now
    printf("%s",str2);  // printing J to last
    return 0;
}
