#include <stdio.h>

int main()
{

    const int grade = 29;

    // for (int x = 0; x < 10; x++)
    // {
    //     printf("%d\n", x);
    // }

    switch (grade)
    {

    case ((grade > 80) || (grade < 101)):
        printf("You Got A+");
        break;

    default:
        printf("HiHIhi");
    }

    return 0;
}