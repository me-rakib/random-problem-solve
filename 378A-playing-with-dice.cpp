#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, i, ra=0,rb=0,rd=0, temp1, temp2;
    scanf("%d %d", &a, &b);
    for(i=1; i<=6; i++)
    {
        temp1 = abs(i-a);
        temp2 = abs(i-b);
        if(temp1<temp2)
        {
            ra++;
        }
        else if(temp1>temp2)
        {
            rb++;
        }
        else
        {
            rd++;
        }
    }
    printf("%d %d %d",ra,rd,rb);
    return 0;
}