#include<stdio.h>
struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("Enter information for person %d\n",i+1);
        printf("Age = ");
        scanf("%d",&person[i].age);
        printf("Salary = ");
        scanf("%f",&person[i].salary);
    }
    for(i=0; i<3; i++)
    {
        printf("\n\nShowing information for person %d\n",i+1);
        printf("Age = %d\nSalary = %f",person[i].age, person[i].salary);
    }
    return 0;
}
