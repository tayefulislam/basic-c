
#include <stdio.h>

int main()
{

    /*
    Chapter -2

    */

    // write a program to check if a number is divisible by 2 or not.

    // int x;
    // printf("Plase enter a number :");
    // scanf("%d", &x);
    // // check
    // printf("%d\n", x % 2 == 0);

    // Write a program to check if a number is odd or even
    // event => 1;
    // odd => 0;

    // int x;
    // printf("Plase enter a number :");
    // scanf("%d", &x);
    // printf("%d\n", x % 2 == 0);
    // char stars = "12";

    // Practice Question 8 :
    /*
    print 1(true) or 0 (false)for following statements:
    a.if it's sunday & it's snowing -> true
    b.if it's monday or it's  raining -> true
    c. if a number is greater than 9 & less than 100 -> ture (2 disit number);

    */

    // a.if it's sunday & it's snowing -> true

    // int isSunday = 0;
    // int isShowing = 1;

    // printf("%d\n", (isSunday == 1) && (isShowing == 1));

    // b.if it's monday or it's  raining -> true

    // int isMonday = 1;
    // int isRaining = 1;

    // printf("%d\n", (isMonday == 1) || (isRaining == 1));

    //  c. if a number is greater than 9 & less than 100 -> ture (2 disit number);
    // or check number 2disit or not
    // int x;
    // printf("Plase enter a number :");
    // scanf("%d", &x);

    // printf("%d\n", (x > 9) && (x < 100));

    /*

    Pratice Question 9;

    Write a program to check if a student passed or failed.
    pass mark 30

    */

    int mark;
    printf("Plase enter your mark:");
    scanf("%d", &mark);

    if (mark >= 30 && mark <= 100)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}