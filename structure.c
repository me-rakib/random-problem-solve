/*
Structure is a user defined data type in c,
which groups various data type under a single one.
*/

#include<stdio.h>
#define MAX_SIZE 100
struct Person
{
    char name[MAX_SIZE];
    int age;
    float salary;
};

int main()
{
    struct Person person1, person2;
    printf("Enter name for person one: ");
    scanf("%s",&person1.name);
    printf("Enter name for person two: ");
    scanf("%s",&person2.name);
    printf("Enter age for person one: ");
    scanf("%d",&person1.age);
    printf("Enter age for person two: ");
    scanf("%d",&person2.age);
    printf("Enter salary for person one: ");
    scanf("%f",&person1.salary);
    printf("Enter salary for person one: ");
    scanf("%f",&person2.salary);

    printf("\nPerson One: \n");
    printf("Name = %s\nAge = %d\nSalary = %f",person1.name, person1.age, person1.salary);
    printf("\nPerson Two: \n");
    printf("Name = %s\nAge = %d\nSalary = %f",person2.name, person2.age, person2.salary);

    return 0;
}
