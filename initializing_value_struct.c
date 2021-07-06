#include<stdio.h>
struct Person
{
    int age;
    int salary;
};
int main()
{
    struct Person person1 = {10, 5000}, person2, person3;
    person2.age = 11111;
    person2.salary = 10000;

    person3.age = person2.age;
    person3.salary = 20;

    printf("per1: age = %d  salary = %d\n", person1.age, person1.salary);
    printf("per2: age = %d  salary = %d\n", person2.age, person2.salary);
    printf("per3: age = %d  salary = %d\n", person3.age, person3.salary);

    return 0;
}
