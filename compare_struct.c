#include<stdio.h>
struct Person
{
    int age;
    int salary;
};
int main()
{
    struct Person person1 = {10, 1000};
    struct Person person2 = {20, 2000}, person3;
    person3 = person2;

    if(person2.age == person3.age  && person2.age == person3.age)
        printf("True");
    else
        printf("False");
    return 0;
}
