#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[32], value, i=0, j, res=0, p;
    printf("Enter 1 or 0: ");
    while (1)
    {
        scanf("%d", &value);
        if(value == 0 || value == 1) 
        {
            arr[i] = value;
            i++;
        }
        else
        {
            break;
        }
    }
    for(j=i-1; j>=0; j--)
    {
        p = pow(2, j);
        res += (arr[j] * p);
    }
    printf("Decimal = %d", res);
    return 0;
}