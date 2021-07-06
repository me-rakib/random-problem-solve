#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
} std1 = {"S1"},
std2;
int main()
{
    printf("%s %d %0.2f",std1.name, std1.roll, std1.marks);
    printf("\n%s %d %0.2f",std2.name, std2.roll, std2.marks);
    return 0;
}
