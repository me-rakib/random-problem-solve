#include<stdio.h>
int main()
{
    int x = 5;
    int *p;
    p = &x;
    printf("&x = %d\n",&x);
    printf("p = %d\n",p);   //address of x, stored in p
    printf("*p = %d\n",*p);  // value of x, as *p is pointing to x
    printf("&p = %d\n\n",&p);  // address of pointer p

    int **q;
    q = &p;
    printf("q = %d\n",q);   // address of p, stored in q
    printf("*q = %d\n",*q);   // address of x
    printf("*(*q) = %d\n",*(*q));  // value of x
    printf("&q = %d\n\n",&q);   // address of pointer q

    int ***r;
    r = &q;
    printf("r = %d\n",r);   // address of q
    printf("*r = %d\n",*r);  //address of p
    printf("**r = %d\n",*(*r));  //address of x
    printf("***r = %d\n",*(*(*r)));  //   value of x
    return 0;
 }
