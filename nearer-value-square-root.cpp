#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double ans;
    scanf("%d", &n);
    
    ans = sqrt(n);

    printf("%lf", round(ans));
    return 0; 
}