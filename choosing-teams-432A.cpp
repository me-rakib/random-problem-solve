#include<stdio.h>
using namespace std;
int main() 
{
    int n, k, temp, i, v=0;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++) 
    {
        scanf("%d",&temp);
        if(temp+k <=5) 
        {
            v++;
        }
    }
    printf("%d", v/3);
    return 0;
}