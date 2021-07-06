#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    scanf("%[^\n]",s);
    printf("%10s\n",s);
    printf("%d\n",sizeof(s));
    printf("%d\n",strlen(s));
    return 0;
}
