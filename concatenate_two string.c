#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i,j;
    printf("Enter first string: ");
    scanf("%s",str1);
    printf("Enter second string: ");
    scanf("%s",str2);
    i = strlen(str1);
    printf("%d  %d\n",i,strlen(str2));
    for(j=0; j<=strlen(str2); j++)
    {
        str1[i] = str2[j];
        i++;
    }
    printf("%s",str1);
    return 0;
}
