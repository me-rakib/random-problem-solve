#include<stdio.h>
#include<string.h>
int main()
{
    char s1[5] ="nitk1";
    char s2[10] = "karnataka";
    //printf("%s\n",s1);

    printf("%s",strncpy(s1,s2,2));
    return 0;
}
