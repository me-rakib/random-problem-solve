#include <istream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += (i * (n - i + 1));
    }
    printf("%d ",sum);

    sum = (1/6.0) * n * (n+1) * (n+2);

    printf("%d", sum);
    return 0;

}