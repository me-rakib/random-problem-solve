#include<stdio.h>
struct dob
{
    int date;
    int month;
    int year;
};
struct student
{
    char name[20];
    int roll;
    int marks;
    struct dob d1;
};
int main()
{
    struct student s1 = { "Rakib", 132, 10, 3, 8, 2001};

    printf("%s %d %d %d %d %d",s1.name, s1.roll, s1.marks, s1.d1.date, s1.d1.month, s1.d1.year);
    return 0;
}
