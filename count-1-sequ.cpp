#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int n, temp, i=0, j,k, c=0, res[MAX_SIZE];
    printf("Enter 1 or 0: ");
    while (1)
    {
        scanf("%d", &n);
        if(n==0 || n==1)
        {
            if(n==0)
            {
                res[i] = c;
                c=0;
                i++;
            }
            else
            {
                c++;
            }
        }
        else
        {
            res[i] = c;
            break;
        }
    }
    for(j=0; j<i; j++)
    {
        for(k=j+1; k<=i; k++)
        {
            if(res[j]<res[k])
            {
                temp = res[j];
                res[j] = res[k];
                res[k] = temp;
            }
        }
    }
    printf("1 after 1, most times: %d",res[0]);
    return 0;
}
