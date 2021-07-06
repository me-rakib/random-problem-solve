#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j, r=0, k=0;
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++)
    {
        if(i%4==2)
        {
            for(j=1; j<m; j++)
            {
                printf(".");
            }
            printf("#");
        }
        else if(i%4==0)
        {
            printf("#");
            for(j=1; j<m; j++)
            {
                printf(".");
            }
        }
        else
        {
            for(j=1; j<=m; j++)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
