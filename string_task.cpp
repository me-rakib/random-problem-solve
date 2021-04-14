#include<stdio.h>
#include<string.h>
#define MAX_SIZE 102
void check(char *p, int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        int ascii = (int)*p;
        if((ascii>=65) && (ascii<=90))
        {
            *p = (char)(ascii+32);
        }
        if((*p=='a')||(*p=='e')||(*p=='i')||(*p=='o')||(*p=='u')||(*p=='y'))
           {
               p++;
               continue;
           }
        else
            {
                printf(".%c",*p);
                p++;
            }
    }
}
int main()
{
    char line[MAX_SIZE];
    fgets(line, sizeof(line), stdin);
    int len = strlen(line)-1;
    check(line, len);
    return 0;
}
