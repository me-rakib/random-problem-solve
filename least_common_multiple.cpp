#include<iostream>
using namespace std;
int main()
{
    int a,b,mx,lcm;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    mx = a>b?a:b;
    while(true)
    {
        if((mx%a==0) && (mx%b==0))
        {
            lcm = mx;
            break;
        }
        mx++;
    }
    printf("Least common multiple = %d",lcm);
    return 0;
}
