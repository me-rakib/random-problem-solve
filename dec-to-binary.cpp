#include<iostream>
using namespace std;
int main()
{
    int n, i, k;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=32; i>=0; i--)
    {
        k = n >> i;
        if(k & 1)
        {
            printf("%d", 1);
        }
        else{
            printf("%d",0);
        }
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, binary[32], i=0, j;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     while(num != 0)
//     {
//         binary[i] = num % 2;
//         num /= 2;
//         i++;
//     }
//     for(j=i-1; j>=0; j--)
//     {
//         printf("%d ",binary[j]);
//     }
//     return 0;
// } 

