#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, i, minimum, gcd, lcm;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    minimum = min(a,b);
    for(i=1; i<=minimum; i++)
    {
        if((a%i==0) && (b%i==0))
        {
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;
    printf("Greatest common divisor = %d",gcd);
    printf("\nGreatest common divisor = %d",lcm);
    return 0;
}
