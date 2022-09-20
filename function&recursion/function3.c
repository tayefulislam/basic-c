#include <stdio.h>

// sum of a and b.

// define the function

int sum(int a, int b);

int main()
{
    int a, b, s;

    printf("Plase enter 1st value:");
    scanf("%d", &a);
    printf("Plase enter 2nd value:");
    scanf("%d", &b);
    s = sum(a, b);
    printf("Total Sum : %d\n", s);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}