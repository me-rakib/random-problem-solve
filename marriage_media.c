#include <stdio.h>

int main()
{
    printf("\n\nEligiblity Check\n\n");
    float height, weight, salary, assets;
    int vehicle;

    printf("Enter height: ");
    scanf("%f", &height);
    if (height > 5.5 && height < 6.0)
    {
        printf("Enter weight: ");
        scanf("%f", &weight);
        if (weight > 60 && weight < 80)
        {
            printf("Enter salary (enter 1 if job type is gov): ");
            scanf("%f", &salary);
            if (salary > 100000 || salary == 1)
            {
                printf("Enter asset (enter 1 if job type is gov): ");
                scanf("%f", &assets);
                if (assets > 10000000 || assets == 1)
                {
                    printf("Have car/bike (enter 1 for car or 0 for bike): ");
                    scanf("%d", &vehicle);
                    if (vehicle == 1)
                    {
                        printf("\n1 - Eligible\n");
                    }
                    else
                    {
                        printf("\n0 - Not Eligible\n");
                    }
                }
                else
                {
                    printf("\n0 - Not Eligible\n");
                }
            }
            else
            {
                printf("\n0 - Not Eligible\n");
            }
        }
        else
        {
            printf("\n0 - Not Eligible\n");
        }
    }
    else
    {
        printf("\n0 - Not Eligible\n");
    }
}