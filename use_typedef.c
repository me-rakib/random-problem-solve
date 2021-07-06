// use typedef in c

#include<stdio.h>
typedef struct student
{
    int id;
    char name[10];
    int age;
} STD;
int main()
{
    STD s1 = {10, "Rakib", 20};
    printf("%s", s1.name);
    return 0;
}
