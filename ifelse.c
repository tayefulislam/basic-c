#include <stdio.h>

int main()
{
    // int age;
    // printf("Enter Age:");
    // scanf("%d", &age);

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

    // if (age >= 20)
    // {
    //     printf("get go abroad\n");
    // }

    // if (age >= 18 && age <= 21)
    // {
    //     printf("Do anything\n");
    // }

    // check grade

    // int grade;
    // printf("Plase enter your mark:");
    // scanf("%d", &grade);

    // // cheking the condition

    // if (grade >= 80 && grade <= 100)
    // {
    //     printf("A+\n");
    // }
    // else if (grade >= 70 && grade < 80)
    // {
    //     printf("A\n");
    // }

    // else
    // {
    //     printf("Invalid number\n");
    // }

    // check tenary operator

    // int age;

    // printf("Plase enter a number:");
    // scanf("%d", &age);

    // age >= 18 ? printf("Your are adult\n") : printf("Not adult\n");

    // nested if else
    // check positive and even and od number:
    // test 

    int num;
    printf("Please enter a number");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("Positive Number:\n");

        if (num % 2 == 0)
        {
            printf("even\n");
        }

        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("Nagivate NUmber\n");
    }

    return 0;
}