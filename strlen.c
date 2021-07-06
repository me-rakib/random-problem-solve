#include<stdio.h>
#include<string.h>
int main()
{
    char a[20] = "ABC";
    char b[100] = {'A','B','C','\0'};
    char c[100];
    gets(c);
    char d[100];
    fgets(d,sizeof(d),stdin);
    printf("%d %d %d %d",strlen(a),strlen(b),strlen(c),strlen(d));
    return 0;
}
