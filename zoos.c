#include<stdio.h>
#include<string.h>
int main()
{
    char ch[22];
    scanf("%s", &ch);
    int len,i, x=0, y=0;
    len = strlen(ch);
    for(i=0; i<len; i++) 
    {
        if(ch[i] == 'z') {
            x++;
        }
        if(ch[i] == 'o') {
            y++;
        }
    }
    if(2*x == y) 
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}