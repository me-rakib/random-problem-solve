#include<stdio.h>
struct student
{
    int id;
    char name[20];
    int age;
}s1, s2;
int main()
{
    scanf("%d", &s1.id);
    scanf("%d", &s2.id);

    printf("%d %d", s1.id, s2.id);
    return 0;
}
