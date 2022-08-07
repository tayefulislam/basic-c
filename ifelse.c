#include <stdio.h>

int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d", &age);

    // if else to get singel result

    /*
        if (age >= 18)
        {
            printf("Will get NID Card\n");
        }

        else if (age >= 13 && age < 18)
        {
            printf("can get birth certificate\n");
        }

        else
        {
            printf("Plase wait for 2 years\n");
        }

        printf("Thank you for give the information\n");

    */

    // if else to check multi conditon and get multi result

    if (age >= 20)
    {
        printf("get go abroad\n");
    }

    if (age >= 18 && age <= 21)
    {
        printf("Do anything\n");
    }

    return 0;
}