/*
Tail recursive-
A recursive function is said to be tail recursive if
the recursive call is the last thing done by
the function. There is no need to keep record
of the previous state.
*/

#include<stdio.h>
void fun(int n);
int main()
{
    int n=3;
    fun(3);
    return 0;
}
void fun(n)
{
    if(n==0)
        return;
    else
        printf("%d ",n);
    return fun(n-1);
}
