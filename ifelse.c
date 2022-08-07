#include <stdio.h>

int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d", &age);

    // if else to get singel result

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

    return 0;
}