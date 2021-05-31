#include<iostream>
using namespace std;
int main()
{
    int s, n, i, j, x[1000], y[1000], c=0;
    scanf("%d %d",&s, &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",(x+i), (y+i));
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(x[i]>x[j])
            {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(x[i]<s)
        {
            c++;
        }
        s += y[i];
    }
    if(c==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
