#include <stdio.h>
#include <stdlib.h>

void f(int*p,int*q)
{
  printf("*i=%d *j=%d\n",*p,*q);   // *p = 0, *q = 6
  p=q;          // check comment 1
  ++(*p);      // *p = *q = *j
  printf("%d %d \n",*p,*q);   // *p = *q
}

int main()
{
    int i=0,j=6;
    f(&i,&j);    //
    printf("%d %d",i,j);   // p = &q = &j
    return 0;
}

/*
Comment 1:
let x = 10;
x = 20;
so now there is no relation between x and 10 r8?

Now,
At first p was the address of i
with p = q  we make connection of p with q and disconnect p's connection with i. ok?
so p = &q = &j
*/
