#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        char word[100];
        scanf("%s",word);
        int len = strlen(word);
        if(len>10)
        {
            int mid = len-2;
            printf("%c%d%c\n",word[0],mid,word[len-1]);
        }
        else
        {
            printf("%s\n",word);
        }
    }
    return 0;
}
