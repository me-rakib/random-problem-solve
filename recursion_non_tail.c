/*
A recursive function is said to be no-tail recursive if
the recursive call us not the last thing
done by the function. After returning back there is
something left to evaluate.
*/

#include<stdio.h>
void fun(int n);
int main()
{
    int n=3;
    fun(n);
    return 0;
}
void fun(int n)
{
    if(n==0)
        return 0;
    fun(n-1);
    printf("%d ",n);
}
