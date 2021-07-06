#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if((n>=2)&&(n<=30))
    {
        int h[n], g[n];
        int i, j, count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d %d",(h+i), (g+i));
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(h[i]==g[j])
                {
                    count++;
                }
            }
        }
        printf("%d",count);
    }
    return 0;
}
