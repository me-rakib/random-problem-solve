#include<iostream>
using namespace std;
int main()
{
    int row, i, j, sp;
    scanf("%d",&row);
    for(i=1; i<=row; i++)
    {
        sp = row-i;
        for(j=0; j<sp; j++)
        {
            printf("  ");
        }
        for(j=1; j<=(i*2)-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
